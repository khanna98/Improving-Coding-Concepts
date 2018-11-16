import java.util.Scanner;

class GFG{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String vowels = "aeiouAEIOU";
        for(int i=0;i<n;i++){
            char a = sc.next().charAt(0);
            if(vowels.indexOf(a)>=0){
                System.out.println("YES");
            }
            else{
                System.out.println("NO");
            }
        }
    }
}