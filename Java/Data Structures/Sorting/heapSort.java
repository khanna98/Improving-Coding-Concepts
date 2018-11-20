import java.util.*;
import java.io.*;
import java.lang.*;

class Test{
    static void heapify(int arr[],int n,int i){
        int largest = i;
        int l = 2*i+1;
        int r = 2*i+2;

        if(l<n && arr[l]>arr[largest]){
            largest = l;
        }

        if(r<n && arr[r]>arr[largest]){
            largest = r;
        }

        if(largest != i){
            int temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;

            heapify(arr,n,largest);
        }
    }
    static void heapSort(int arr[]){
        int n = arr.length;
        for(int i=n/2-1;i>=0;i--){
            heapify(arr,n,i);
        }

        for(int i=n-1;i>=0;i--){
            int temp = arr[0];
            arr[0]= arr[i];
            arr[i] = temp;

            heapify(arr, i, 0);
        }
    }

    static void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    public static void main(String[] args) {
        int arr[] = {12,11,5,6,1,2,4};
        int n = arr.length;
        
        heapSort(arr);
        System.out.print("Sorted Array : ");
        printArray(arr, n);
    }
}