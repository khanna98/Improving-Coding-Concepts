#include<iostream>
using namespace std;

void swap(int *m,int *n){
    int temp = *m;
    *m = *n;
    *n = temp;
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(void){
    int arr[] = {20,5,78,9,2,3,56,19};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<n<<endl;
    cout<<"The unsorted array is : ";
    printArray(arr,n);
    bubbleSort(arr,n);
    cout<<"After sorting : ";
    printArray(arr,n);
    return 0;
}