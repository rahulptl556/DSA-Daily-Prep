#include <iostream>
using namespace std;

class Solution 
{
    public:
    
    bool allocationPossible(int mid, int A[],int M, int N){
        int stu = 1;
        int pages = 0;
        for(int i=0; i<N; i++){
            pages += A[i];
            if(pages>mid){
                stu++;
                if(stu>M) return false;
                pages = A[i];
            }
        }
        
        return true;
    }
    //Function to find minimum number of pages.
    int findPages(int A[], int N, int M) 
    {
        //Edge case
        if(M>N){
            return -1;
        }
        
        int s = 0, e = 0;
        for(int i=0; i<N; i++){
            s = max(s,A[i]);
            e += A[i]; 
        }
        int ans;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(allocationPossible(mid,A,M,N)){
                ans = mid;
                e = mid-1;
            }
            else{
                s = mid+1;
            }
        }
    
        return ans;
    }
};