#include <iostream>
#include <vector>
using namespace std;


void reverseArray(vector<int> &arr , int m){
    int temp;
    int s = m+1;
    int e = arr.size()-1;

    //Loop
    while(s<e){
        //You can definetly use swap function here swap(arr[s],arr[e])
        temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        e--;
    }
}