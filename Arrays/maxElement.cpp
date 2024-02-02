#include <iostream>
#include <vector>

using namespace std;
//For Min element solution -> for min just int min = INT_MAX and if arr[i]<min then min = arr[i]
class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};
