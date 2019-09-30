import java.util.Scanner;
import java.io.*;
class SumOfArrays{
    public static int[] findSum(int[] a,int[] b,int n,int m){
		// array to store sum. 
		int[] sum= new int[n]; 
        
		int i = n - 1, j = m - 1, k = n - 1; 
        
		int carry = 0, s = 0; 
        
		// Until we reach beginning of array. 
		// we are comparing only for second 
		// array because we have already compare 
		// the size of array in wrapper function. 
		while (j >= 0) 
		{ 
			// find sum of corresponding element 
			// of both array. 
			s = a[i] + b[j] + carry; 
			
			sum[k] = (s % 10); 
            
			// Finding carry for next sum. 
			carry = s / 10; 
            
			k--; 
			i--; 
			j--; 
		} 
        
		// If second array size is less 
		// the first array size. 
		while (i >= 0) 
		{ 
			// Add carry to first array elements. 
			s = a[i] + carry; 
			sum[k] = (s % 10); 
			carry = s / 10; 
            
			i--; 
			k--; 
		} 
        
        int[] ans = new int[n+1];
        
		// If there is carry on adding 0 index 
		// elements append 1 to total sum. 
		if (carry == 1){ 
            ans[0]=1;
        }
        
        k=1;  
        
		// Converting array into number. 
		for ( i = 0; i <= n - 1; i++) { 
			ans[k++] = sum[i]; 
		} 
        
		return ans;
    }
    
    public static int[] sumOfTwoArrays(int[] arr1, int[] arr2)
	{ 
        int n = arr1.length;
        int m = arr2.length;
        if (n >= m) 
        return findSum(arr1, arr2, n, m); 
        
        else
        return findSum(arr2, arr1, m, n);
	} 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr1[] = new int[n];
        for(int i=0;i<n;i++){
            arr1[i] = sc.nextInt();
        }
        int m = sc.nextInt();
        int arr2[] = new int[m];
        for(int i=0;i<m;i++){
            arr2[i] = sc.nextInt();
        }

        int finalAns[] = sumOfTwoArrays(arr1, arr2);

        for(int i=0;i<finalAns.length;i++){
            System.out.print(finalAns[i]+" ");
        }
        System.out.println();
        sc.close();
    }
}
