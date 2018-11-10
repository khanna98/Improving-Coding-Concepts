/*package whatever //do not write package name here */

import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
	public static void main (String[] args) throws IOException {
		//code
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		for(int i=0;i<n;i++){
		    int n1 = sc.nextInt();
		    int n2 = sc.nextInt();
		    if(n1>n2){
		        System.out.println("greater");
		    }
		    else if(n1==n2){
		        System.out.println("equal");
		    }
		    else{
		        System.out.println("lesser");
			}
		}
		
	}
}