#include <numeric>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size();
        
        if (size == 0) {
            return -1; // Empty array, no pivot index
        }

        int totalSum = accumulate(nums.begin(), nums.end(), 0);
        int leftSum = 0;

        for (int i = 0; i < size; ++i) {
            if (leftSum == totalSum - leftSum - nums[i]) {
                return i; // Pivot index found
            }
            leftSum += nums[i];
        }

        return -1; // No pivot index found
    }
};

int main() {
    Solution solution;
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    int pivotIndex = solution.pivotIndex(arr);

    cout << "Pivot Index: " << pivotIndex << endl;

    return 0;
}


// You can also code using calculate leftSum and rightSum and then compare, check on my leetcode submissions