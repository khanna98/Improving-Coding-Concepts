import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int a = sc.nextInt();
            int a2 = sc.nextInt();
            int N = sc.nextInt();
            
            
            double r = (double)a2/a;
            // System.out.println(r);
            double ans = a*(Math.pow(r,N-1));
            System.out.println(Math.round(Math.floor(ans)));
        }
    }
}