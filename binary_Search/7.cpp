//painter's partition problem
#include <iostream>

bool isPossible(int boards[], int n, int k, int mid) {
    int painters = 1;
    int boardSum = 0;

    for (int i = 0; i < n; i++) {
        if (boards[i] > mid) {
            return false; // A board length is greater than the current mid, which is not allowed.
        }

        if (boardSum + boards[i] <= mid) {
            boardSum += boards[i];
        } else {
            painters++;
            boardSum = boards[i];
        }
    }

    return painters <= k; // Check if the number of painters needed is less than or equal to K.
}

int minTimeToPaintBoards(int boards[], int n, int k) {
    int s = 0; // Minimum time (minimum board length)
    int sum = 0; // Sum of all board lengths

    for (int i = 0; i < n; i++) {
        sum += boards[i];
    }

    int e = sum; // Maximum time (sum of all board lengths)
    int ans = -1;

    while (s <= e) {
        int mid = s + (e - s) / 2;

        if (isPossible(boards, n, k, mid)) {
            ans = mid;
            e = mid - 1; // Search for a smaller mid time
        } else {
            s = mid + 1; // Search for a larger mid time
        }
    }

    return ans;
}

int main() {
    const int n = 4; // Number of boards
    int boards[n] = {12, 34, 67, 90}; // Length of each board
    int k = 2; // Number of painters

    int result = minTimeToPaintBoards(boards, n, k);
    std::cout << "The minimum time to paint all the boards is: " << result << std::endl;

    return 0;
}
