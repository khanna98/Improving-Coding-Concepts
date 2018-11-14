import java.io.*;
import java.util.*;

class GFG{

    public static int countOccurances(String s1,String s2){
        int count = 0;
        int lastIndex = 0;
        while(lastIndex!=-1){
            lastIndex = s1.indexOf(s2, lastIndex);
            if(lastIndex != -1){
                count++;
                lastIndex+=s2.length();
            }
        }
        if(count==0){
            count=-1;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s3 = sc.nextLine();
        for(int i=0;i<n;i++){
            String s = sc.nextLine();
            int ans = countOccurances(s, "gfg");
            System.out.println(ans);
        }
    }
}

