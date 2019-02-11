import java.util.Random;

public class GenerateOTP{
    static char[] gen_otp(int len){
        System.out.println("Generating OTP....................");
        System.out.print("Your OTP is : ");

        String num = "0123456789";
        Random r = new Random();
        char[] otp = new char[len];

        for(int i=0;i<len;i++){
            otp[i] = num.charAt(r.nextInt(num.length()));
        }
        return otp;
    }

    public static void main(String[] args) {
        int len = 4;
        System.out.println(gen_otp(len));
    }
}