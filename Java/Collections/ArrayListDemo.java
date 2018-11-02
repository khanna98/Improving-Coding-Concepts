import java.io.*;
import java.util.*;

class ArrayListDemo{
    public static void main(String[] args) throws IOException{
        int n = 5;
        ArrayList<Integer> arrList = new ArrayList<Integer>(n);
        for(int i=0;i<n;i++){
            arrList.add(i);
        }

        System.out.println(arrList);
        arrList.remove(3);
        System.out.println(arrList);

        for(int i=0;i<arrList.size();i++){
            System.out.print(arrList.get(i) + " ");
        }
        System.out.println();
    }
}