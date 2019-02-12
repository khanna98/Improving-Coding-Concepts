import java.util.Scanner;

class SumOfElements{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // Array Elements
        int arr[] = {1,2,3,4,5};
        
        // Enter the sum
        int x = sc.nextInt();

        int i=0,j=1;
        // int maxL = Integer.MIN_VALUE;
        // int secL = Integer.MIN_VALUE;
        int sum=0;
        int flag=0;
        while(i<arr.length){  
            j=0;  
            while(j<arr.length){
                sum = arr[i] + arr[j];
                if(sum==x){
                    flag=1;
                    break;
                }
                j++;
            }
            if(flag==1){
                System.out.println("Elements are : " + arr[i] + "," + arr[j]);
                break;
            }
            i++;
        }
        if(flag==0){
            System.out.println("Sum does not exist !");
        }
        
        sc.close();
    }
}