import java.util.Scanner;

class Test{
    static void swap(int a,int b){
        int temp = a;
        a = b;
        b = temp;
    }

    static void bubbleSort(int[] arr,int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j], arr[j+1]);                
                }
            }
        }
    }

    static void printArray(int[] arr,int n){
        for(int i=0;i<n;i++){
            System.out.print(arr[i] + " ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = {12,11,1,6,7,3,2,4};
        int n = arr.length;
        bubbleSort(arr, n);
        System.out.print("Sorted Array");
        printArray(arr,n);
        sc.close();
    }
}