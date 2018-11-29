import java.util.*;

class file{
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = Integer.toString(n);
        int len = s.length();
        int res=0;
        int ans=0;
        while(n!=0){
            res = n%10;
            ans = ans*10 + res;
            n = n/10;
        }
        System.out.println(ans);
    }
}