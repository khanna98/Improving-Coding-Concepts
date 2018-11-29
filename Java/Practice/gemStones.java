import java.util.*;
import java.lang.*;
import java.io.*;

class file{
    public static void countGemStones(int n,String[] array){
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(array[i].contains(array[j])){
                    count++;
                }
            }
        }
        System.out.println("Answer is : " + count);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int num = sc.nextInt();
            String[] array = new String[num];
            for(int j=0;j<num;j++){
                array[j] = sc.next();
            }
            countGemStones(n, array);

        }
    }
}