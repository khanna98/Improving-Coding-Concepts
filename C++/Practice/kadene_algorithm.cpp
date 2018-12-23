#include<iostream>
using namespace std;

int main(){
    
    // Declaration
    int n;
    cin>>n;
    int arr[n];
    int cs=0;
    int ms=0;
    

    //Input the Array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // Kadene's Algorithm for Maximum Subarray Sum
    for(int i=0;i<n;i++){
        cs = cs+arr[i];
        if(cs<0){
            cs=0;
        }
        ms = max(cs,ms);
    }

    cout<<"Maximum Sum is "<<ms<<endl;

}