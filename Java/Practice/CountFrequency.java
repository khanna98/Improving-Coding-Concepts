import java.util.*;
public class CountFrequency{
    static void countFreq(int[] arr,int n){
        Arrays.sort(arr);
        int count=1;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                count++;
            }
            else{
                System.out.println(arr[i] + " occurs " + count);
                count=1;
            }
        }
    }
    public static void main(java.lang.String a[])
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
		{
			arr[i]=sc.nextInt();			
		}
		countFreq(arr,n);
	}
}