// You are using Java
import java.util.*;
import java.io.*;

class file{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        List<Integer> li = new ArrayList<Integer>();
        int n = sc.nextInt();
        for(int i=0;i<n;i++){
            int a = sc.nextInt();
            li.add(a);
        }
        int n1 = sc.nextInt();
        for(int i=0;i<n1;i++){
            //System.out.println("Hello");
            sc.nextLine();
            String s = sc.nextLine();
            String s1 = "insert";
            String s2 = "delete";
            s = s.toLowerCase();
            if(s.equals(s1)){
                int n2 = sc.nextInt();
                //System.out.println(n2);
                int a2 = sc.nextInt();
                //System.out.println(a2);
                li.add(n2,a2);
            }
            if(s.equals(s2)){
                int a1 = sc.nextInt();
                li.remove(a1);
            }
        }
        
        for(int i=0;i<li.size();i++){
            System.out.print(li.get(i) + " ");
        }
        
    }
}