#include <iostream>
using namespace std;

class Solution
{
  public:
    long long minTime(int arr[], int n, int k)
    {
        
        long long start = 0, end = 0, mid;
        
        for(int i=0;i<n;i++){
            if(arr[i]>start)
            start = arr[i];
            end += arr[i]; 
        }
        
        long long ans;
        while(start<=end){
            mid = start + (end-start)/2;
            int painter = 1;
            int length = 0;
            for(int i=0;i<n;i++){
                length += arr[i];
                if(length > mid){
                    painter++;
                    length = arr[i];
                }            
            }
            if(painter <= k){
                ans = mid;
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        return ans;
    }
};