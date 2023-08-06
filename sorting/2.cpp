//bubble sort
#include <iostream>
#include <vector>
using namespace std;

// Function to perform bubble sort on a vector of integers
void bubbleSort(vector<int>& arr, int n)
{   
    // Outer loop: Iterate over the array from 0 to n-1
    for(int i = 0; i < n - 1; i++) {
        // 'swapped' flag to optimize the bubble sort algorithm
        // If no two elements were swapped in a pass, the array is already sorted
        bool swapped = false;
        
        // Inner loop: Iterate from the beginning of the array to n-i-1
        // After each pass, the largest element will be at the end,
        // so we don't need to compare the last i elements again.
        for(int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements and swap them if they are in the wrong order
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        // If no two elements were swapped in this pass, the array is already sorted
        if(swapped == false) {
            // Break out of the outer loop since the array is sorted
            break;
        }
    }
}

int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    int n = arr.size();

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the bubbleSort function to sort the array
    bubbleSort(arr, n);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
