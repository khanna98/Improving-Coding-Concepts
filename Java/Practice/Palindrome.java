import java.util.Scanner;
class Palindrome{
    public static boolean checkPalindrome(String str){
       StringBuilder rev = new StringBuilder(str);
       rev.reverse();
       if(str.equals(rev.toString())){
           return true;
       }
       else{
           return false;
       }
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        if(checkPalindrome(str)){
            System.out.println("The given string is a Palindrome.");
        }
        else{
            System.out.println("The given string is not a Palindrome.");
        }
        sc.close();
    }
}