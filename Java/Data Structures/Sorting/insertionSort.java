import java.util.*;
import java.lang.*;
import java.io.*;

class Test{
    // Method to sort the array using Insertion Sort
    static void insertionSort(int arr[],int n){
        for(int i=0;i<n;i++){
            int key = arr[i];
            int j = i-1;
             
            // Move elements of arr[0..i-1], that are 
            // greater than key, to one position ahead 
            // of their current position 
            
            while(j>=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
    }

    // Utility function to print the array
    static void printArray(int arr[],int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
    // Driver method for testing the code
    public static void main(String[] args) {
        int arr[] = {12,13,5,6,1,8,11};
        int n = arr.length;
        insertionSort(arr, n);
        printArray(arr, n);
    }
}