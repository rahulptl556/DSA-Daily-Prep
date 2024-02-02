#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoNumberSum(vector<int> arr, int targetSum) {
    sort(arr.begin(), arr.end());
    
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        int currentSum = arr[left] + arr[right];

        if (currentSum == targetSum) {
            // Found a pair that sums up to the target
            return {arr[left], arr[right]};
        } else if (currentSum < targetSum) {
            left++;
        } else {
            right--;
        }
    }

    // No such pair found
    return {};
}
