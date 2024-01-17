#include <iostream>
using namespace std;

bool binarySearch(int arr[],int size, int key){
    int s = 0;
    int e = size-1;

    while(s<=e){
// UPDATING MID
    int mid = s+(e-s)/2;

// Comparing Key value with Mid
        if(key == arr[mid]){
            return true;
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
    return false;

}

int main(){

    int arr[5] = {-1,2,3,4,5};

    bool present = binarySearch(arr,5,3);
    if(present){
    cout << "Present" << endl;
    }
    else{
        cout << "Absent" << endl;
    }


  return 0;
}