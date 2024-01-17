#include <iostream>
using namespace std;

int firstOcc(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    int ans = 0;
  
    while(s<=e){
// UPDATING MID
    int mid = s+(e-s)/2;

// Comparing Key value with Mid
        if(key == arr[mid]){
            ans = mid;
            e = mid-1;
        }
        // go right ie; s=mid
        else if(key > arr[mid]){
            s = mid+1;
        }
        //go left ie; e = mid
        else{
            e = mid-1;
        }

    }
    return ans;

}
int lastOcc(int arr[],int size, int key){
    int s = 0;
    int e = size-1;
    int ans = 0;

    while(s<=e){
        // UPDATING MID
    int mid = s+(e-s)/2;

        if(key == arr[mid]){
          // Storing the ans and search in left for 1st occurence
            ans = mid;
            s = mid+1;
        }
        
        else if(key > arr[mid]){
            s = mid+1;
        }
      
        else{
            e = mid-1;
        }

    }
    return ans;

}

int main(){

    int arr[10] = {-1,1,2,2,2,2,2,2,5,5};
    cout << firstOcc(arr,10,2) << endl;
    cout << lastOcc(arr,10,2) << endl;


  return 0;
}