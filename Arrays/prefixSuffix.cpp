#include <iostream>
#include <vector>
using namespace std;

bool isEqualSubArray(int arr[],int n){
    int total=0;
    int leftSum =0;
    int rightSum = 0;
      
    for(int i=0;i<n;i++){
        total += arr[i];
    }
    for(int i=0;i<n;i++){
        leftSum += arr[i];
        rightSum = total - leftSum;

        if(leftSum == rightSum){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[8] = {3,4,-2,5,8,20,-10,8};
    if(isEqualSubArray(arr,8)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}