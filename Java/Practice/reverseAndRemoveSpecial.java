import java.util.*;

class file{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        s = s.replaceAll("[^a-zA-Z0-9]", "");
        System.out.println("After Removal : " + s);
        StringBuilder str = new StringBuilder(s);
        str = str.reverse();
        System.out.println("Reversed String : " + str);
        sc.close();
    }
}