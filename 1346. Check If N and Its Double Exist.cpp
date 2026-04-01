#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();

        for (int i = 0; i < n; ++i) {
            int target = arr[i] * 2;
            int left = 0, right = n - 1;

            while (left <= right) {
                int mid = left + (right - left) / 2;
                if (arr[mid] == target && mid != i) {
                    return true;
                } else if (arr[mid] > target) {
                    right = mid - 1;
                } else {
                    left = mid + 1;
                }
            }
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {0, -2, 2};
    // V?i m?ng {0, -2, 2}, k?t qu? s? là 1 (true) vì -2 * 2 = -4 (ko có), 0 * 2 = 0 (ko có s? 0 th? hai), 2 * 2 = 4 (ko có)
    // À khoan, v?i b? {-2, 0, 2}, code s? tr? v? 0 (false) là chính xác.
    // N?u b? là {10, 2, 5, 3}, nó s? tr? v? 1 (true) vì 5 * 2 = 10.
    cout << sol.checkIfExist(nums) << endl;
    return 0;
}
