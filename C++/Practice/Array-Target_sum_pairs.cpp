#include<iostream>
using namespace std;
int main() {
  int n; 
  cin>>n; // Size of Array
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i]; // Array Elements
  }
  int target;
  cin>>target; // Target Value
  
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
  int count=0;
//   cout<<target;
  for(int i=0;i<n and count<n/2;i++,count++){
    for(int j=0;j<n;j++){
        int a = arr[i];
        int b = arr[j];
        // cout<<a<<" "<<b<<endl;
        int sum = a+b;
        if(sum==target){
            cout<<a<<" and "<<b<<endl;
        }
    }
  }
//   cout<<endl;
	return 0;
}