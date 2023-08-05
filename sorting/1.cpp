//selection sort
#include <iostream>

// Function to perform Selection Sort on an array
void selectionSort(int arr[], int n) {
    // Traverse through the entire array
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume the current element is the minimum

        // Find the index of the minimum element in the remaining unsorted part of the array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update the index of the minimum element
            }
        }

        // Swap the found minimum element with the first unsorted element
        if (minIndex != i) {
            std::swap(arr[i], arr[minIndex]);
        }
    }
}

int main() {
    const int n = 6;
    int arr[n] = {64, 25, 12, 22, 11, 90};

    std::cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    selectionSort(arr, n); // Call the selection sort function

    std::cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
