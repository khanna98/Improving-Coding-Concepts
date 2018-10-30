#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[],int n){
    int min_index,i,j;
    for(i=0;i<n-1;i++){
        min_index = i;
        for(j=i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(&arr[min_index],&arr[i]);
    }
}

int main(void){
    int arr[] = {64,25,12,22,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    cout<<"Sorted Array : ";
    printArray(arr,n);
}