//insertion sort cards jese
#include <iostream>
#include <vector>
using namespace std;

// Function to perform insertion sort on a vector of integers
void insertionSort(int n, vector<int> &arr) {
    // Outer loop: Iterate over the array from the second element (index 1)
    // The first element (index 0) is considered already sorted.
    for (int i = 1; i < n; i++) {
        // Store the value of the current element in a temporary variable
        int temp = arr[i];

        // Start comparing the current element with the elements on its left (sorted part)
        int j = i - 1;
        for (; j >= 0 && arr[j] > temp; j--) {
            // Shift the element to the right since it is greater than the current element
            arr[j + 1] = arr[j];
        }

        // Place the current element in its correct position in the sorted part of the array.
        arr[j + 1] = temp;
    }
}

int main() {
    // Sample input vector for testing
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    // Display the original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the insertionSort function to sort the array
    insertionSort(n, arr);

    // Display the sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
