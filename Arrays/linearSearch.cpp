#include <iostream>
using namespace std;

bool isPresent(int arr[], int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i] == key){
            return true;
        }
    }
    return false;
}

int main(){
    int arr[5] = {1,4,3,-2,5};
    
    cout << isPresent(arr,5,2);
    
    return 0;
}