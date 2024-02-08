#include <iostream>
#include <vector>
#include <algorithm> 

int mySolution(std::vector<int> &arr, int B) {
    int s = 0;
    int e = 1;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    
    if(B<0){
        B = B*-1;
    }
    
    while(e<n){
        if(arr[e]-arr[s] == B){
            return 1;
        }
        else if(arr[e]-arr[s]>B){
            s++;
        }
        else{
            e++;
        }
        
        if(s == e){
            e++;
        }
    }
    return 0;
}