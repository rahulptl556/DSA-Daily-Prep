#include <iostream>
using namespace std;

int firstOcc(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int ans;

    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            e = mid;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}
int lastOcc(int arr[],int size,int key){
    int s = 0;
    int e = size-1;
    int ans;

    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[10] = {1,3,3,3,3,3,3,3,5,7};
    int first = firstOcc(arr,10,3);
    int last = lastOcc(arr,10,3);

    int numOfOcc = (lastOcc(arr,10,3) - firstOcc(arr,10,3)) + 1;
    cout <<  first << endl;
    cout << last << endl;
    cout << numOfOcc << endl;


    return 0;
}