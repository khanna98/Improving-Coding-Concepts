// You are using Java
import java.util.*;
import java.io.*;

class BalancedParenthesis{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Stack<Character> stk = new Stack<Character>();
        int count=0;
        String s = sc.nextLine();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(' || s.charAt(i)=='{' || s.charAt(i)=='['){
                count++;
                stk.push(s.charAt(i));
            }
            else if(s.charAt(i)==')' || s.charAt(i)=='}' || s.charAt(i)==']'){
                count--;
                stk.pop();
                // System.out.print(stk.pop() + " ");
            }
        }
        // System.out.println();
        if(count==0){
            System.out.println("Balanced");
        }
        else{
            System.out.println("Unbalanced");
        }
    }
}