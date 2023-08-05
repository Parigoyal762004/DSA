//aggresive cow problem
#include <iostream>
#include <vector>
#include <algorithm>

bool isPossible(const std::vector<int>& stalls, int k, int mid, int n) {
    int cowCount = 1;
    int lastPos = stalls[0];

    for (int i = 0; i < n; i++) {
        if (stalls[i] - lastPos >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPos = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(const std::vector<int>& stalls, int k) {
    std::vector<int> sortedStalls = stalls; // Create a copy of stalls vector to avoid modifying the original
    std::sort(sortedStalls.begin(), sortedStalls.end());

    int s = 0;
    int n = sortedStalls.size();
    int e = sortedStalls[n - 1];
    int ans = -1;
    int mid;

    while (s <= e) {
        mid = s + (e - s) / 2;

        if (isPossible(sortedStalls, k, mid, n)) {
            ans = mid;
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    return ans;
}

int main() {
    const int n = 5; // Number of stalls
    std::vector<int> stalls = {1, 2, 4, 8, 9}; // Positions of stalls

    int k = 3; // Number of cows

    int result = aggressiveCows(stalls, k);
    std::cout << "The maximum minimum distance between cows is: " << result << std::endl;

    return 0;
}
