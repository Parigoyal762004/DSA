//search in a sorted rotated array
// basically we have 2 lines if we take graph as representaion here we are using pivot as well mtlb kahan se rotation start ho rhi hai toh basically target ko pivot se compare krlo and accordingly seach in the respective line -pivot nikalo -condition check kro -binary search lgadogit add .

#include <iostream>
using namespace std;
int searchInRotatedArray(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; // Found the target
        }

        if (arr[left] <= arr[mid]) {
            // Left half is sorted
            if (target >= arr[left] && target < arr[mid]) {
                right = mid - 1; // Search the left half
            } else {
                left = mid + 1; // Search the right half
            }
        } else {
            // Right half is sorted
            if (target > arr[mid] && target <= arr[right]) {
                left = mid + 1; // Search the right half
            } else {
                right = mid - 1; // Search the left half
            }
        }
    }

    return -1; // Target not found
}

int main() {
    int arr[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    int index = searchInRotatedArray(arr, n, target);

    if (index != -1) {
        cout << "Target " << target << " found at index " << index << endl;
    } else {
       cout << "Target " << target << " not found in the array." << endl;
    }

    return 0;
}
