// book allocation problem

#include <iostream>
// Function to check if it is possible to allocate books with maximum pages per student as 'mid'
bool isPossible(int arr[], int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
        if (studentCount > m) {
            return false;
        }
    }
    return true;
}

// Function to find the minimum maximum pages a student can get
int allocateBooks(int arr[], int n, int m) {
    int s = 0;
    int sum = 0;

    // Calculate the sum of all pages in the array
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s <= e) {
        // If it is possible to allocate books with 'mid' pages per student
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            // Search for a smaller 'mid'
            e = mid - 1;
        } else {
            // Search for a larger 'mid'
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main() {
    const int n = 4; // Number of books in the array
    int arr[n] = {12, 34, 67, 90}; // Array representing the number of pages in each book
    int m = 3; // Number of students

    int result = allocateBooks(arr, n, m);
    std::cout << "The minimum maximum pages a student can get is: " << result << std::endl;

    return 0;
}
