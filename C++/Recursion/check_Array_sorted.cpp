#include<iostream>
using namespace std;

bool isSorted(int *a,int n){
    // Base Case
    if(n==1){
        return true;
    }

    // Rec Case
    if(a[0]<a[1] && isSorted(a+1,n-1)){
        return true;
    }
    return false;
}

int main(){
    int arr[] = {1,2,13,5,7};
    if(isSorted(arr,5)){
        cout<<"Sorted Array"<<endl;
    }
    else{
        cout<<"Not Sorted!"<<endl;
    }
    return 0;
}