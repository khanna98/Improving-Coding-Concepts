#include<iostream>
using namespace std;

int main(){
    // Decalre and Initialize the array
    int arr[] = {1,2,3,4,5};
    
    // Find the size of array
    int n = sizeof(arr)/sizeof(arr[0]);

    // Main Logic
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            // Elements in a SubArray
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    
    return 0;
}