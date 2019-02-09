#include<iostream>
#include<algorithm>
using namespace std;
int main() {
  int n; // Size of Array
  cin>>n;
  int arr[n]; // Array of Numbers
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  
  int target; // Target Variable
  cin>>target; 
  
  sort(arr,arr+n); // Sorting the Array elements
  
//   int count=0;
  for(int i=0;i<n;i++){
    for(int j=i;j<n-i;j++){
      for(int k=j;k<n-j;k++){
        int a = arr[i];
        int b = arr[j];
        int c = arr[k];
        if((a+b+c)==target){
          cout<<i<<", "<<j<<" and "<<k<<endl;
        }
      }
    }
  }
// cout<<target<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
	return 0;
}