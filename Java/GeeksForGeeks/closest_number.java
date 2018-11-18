import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    public static int closestNumber(int n, int m) {
        int rem = n / m;
        int n1 = m * rem;
        int n2 = (n * m) > 0 ? (m * (rem + 1)) : (m * (rem - 1));

        if (Math.abs(n - n1) < Math.abs(n - n2)) {
            return n1;
        }
        else
            return n2;
    }

    public static void main(String[] args) {
        // code
        Scanner sc = new Scanner(System.in);

        int num = sc.nextInt();
        for(int i=0;i<num;i++){
            int n = sc.nextInt();
            int m = sc.nextInt();

            System.out.println(closestNumber(n, m));
        }

    }
}