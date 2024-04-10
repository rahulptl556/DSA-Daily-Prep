#include <iostream>
#include <limits>
using namespace std;
#include <vector>
#include <string>


int fac(int n){
  if(n<=2){
    return n;
  }
    return fac(n-1)*n;
}

int sum(int n){
  if(n==1)
    return 1;
  return sum(n-1)+n;
}

int power(int n){
  if(n==1)
    return 2;
  return power(n-1)*2;
}

int sumOfSq(int n){
  if(n==1)
    return 1;
  return sumOfSq(n-1)+(n*n);
}

int fib(int n){
  if(n<=1)
    return n;
  return 1;
  return fib(n-2)+fib(n-1);
}

// Euclids Algo
int gcd(int a,int b){
  if(b == 0){
    return a;
  }
  return gcd(b,b%a);
}

void print(int arr[], int i){
  if(i==-1)
    return;
  print(arr,i-1);
  cout << arr[i] <<" ";
}

int sumArr(int arr[], int i){
  if(i==-1)
    return 0;
  return arr[i] + sumArr(arr, i-1);
}

int findMin(int arr[], int i){
  if(i == -1)
   return INT8_MAX;
  return min(arr[i],findMin(arr, i-1));
}

bool checkPalindrome(string str){
  int s = 0;
  int e = str.length()-1;
  while(s<=e){
    if(str[s] == str[e]){
      s++;
      e--; 
    }
    else{
      return false;
    }   
  }
  return true;
}

bool palindrome(string str, int s, int e){
  if(s>=e)
    return true;
  if(str[s] != str[e])
    return false;
  return palindrome(str, s+1, e-1);
}

int vowels(string str, int i){
  if(i==-1)
    return 0;
  if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    return 1 + vowels(str, i-1);
  else
    return vowels(str, i-1);
}

void reverse(string &str, int i, int j){
    if(i>=j){
      return;
    }
    swap(str[i],str[j]);
    reverse(str, i+1, j-1); 
}

void toUppercase(string &str, int i){
  if(i == -1)
    return;
  else
    str[i] = str[i] + 'A' - 'a';
  toUppercase(str, i-1);
}
void toLowercase(string &str, int i){
  if(i == -1)
    return;
  else
    str[i] = str[i] + 'a' - 'A';
  toLowercase(str, i-1);
}

bool binarySearch(int arr[], int s, int e, int  key){
  int mid = s + (e-s)/2;
  
  if(s>e)
    return 0;
  
  
  if(arr[mid] == key)
    return 1;
    
  else if(key>arr[mid])
    return binarySearch(arr, mid+1, e, key);
    
  else
    return binarySearch(arr, s, mid-1,key);
}

void subSeq(vector<int> arr,int i, int size, vector<int> temp,vector<vector<int>> &ans){
  if(i == size){
    ans.push_back(temp);
    return;
  }
  //Not included
  subSeq(arr,i+1,size,temp,ans);

  //Included
  temp.push_back(arr[i]);
  subSeq(arr,i+1,size,temp,ans);
}

void print2DVector(const vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (int element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

void parenthesis(int n, int l, int r, string &temp, vector<string>&ans){

  if(l == n && r == n){
    ans.push_back(temp);
    return;
  }
  
  if(l <= n){
    temp.push_back('(');
    parenthesis(n,l+1,r,temp,ans);
    temp.pop_back();
  }
  
  if(r < l){
    temp.push_back(')');
    parenthesis(n,l,r+1,temp,ans);
    temp.pop_back();
  }
}

int sum(vector<int>nums){
  int sum = 0;
  for(int j=0;j<nums.size();j++){
    sum += nums[j];
  }
  return sum;
}

void subSeqSum(vector<int> arr,int i, int size, vector<int> temp,vector<int> &ans){
      if(i == size){
        int subsetSum = sum(temp);
        ans.push_back(subsetSum);
        return;
      }
      //Not included
      subSeqSum(arr,i+1,size,temp,ans);

      //Included
      temp.push_back(arr[i]);
      subSeqSum(arr,i+1,size,temp,ans);
}

void subSeqSum2(vector<int> arr,int i, int size, int sum, int target){
    if (i > size) {
      return;
    }
  
    if(sum == target){
      cout << "Found";
    }
  
    //Not include sum
    subSeqSum2(arr,i+1,size,sum,target);

    //Included sum  
    subSeqSum2(arr,i+1,size,sum + arr[i], target);
}

int main() {
  vector<int> arr = {3,4,5};
  int sum = 0;
  vector<int> ans = {};
  // subSeqSum(arr, 0,arr.size(), temp, ans);
  
  subSeqSum2(arr, 0,arr.size(), sum, 50);
    
}