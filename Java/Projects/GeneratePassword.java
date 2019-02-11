import java.util.Random;

public class GeneratePassword{
    static char[] gen_Pass(int len){
        System.out.println("Generating password..............");
        System.out.print("Your new password is : ");

        String cap_chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String small_chars = "abcdefghijklmnopqrstuvwxyz";
        String num = "0123456789";
        String symbol = "!@#$%^&*_=+-/.?,<>";

        String values = cap_chars + small_chars + num + symbol;

        Random ran = new Random();
        char[] pass = new char[len];

        for(int i=0;i<len;i++){
            pass[i] = values.charAt(ran.nextInt(values.length()));
        }
        return pass;
    }
    public static void main(String[] args) {
        int length = 10;
        System.out.println(gen_Pass(length));     
    }
}