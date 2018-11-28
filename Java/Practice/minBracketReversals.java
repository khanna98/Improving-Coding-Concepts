import java.util.*;

class file{
    static int countMinReversals(String exp){
        int len = exp.length();
        if(len%2!=0){
            return -1;
        }

        Stack<Character> s = new Stack<>();

        for(int i=0;i<len;i++){
            char c = exp.charAt(i);
            if(c=='}' && !s.empty()){
                if(s.peek()=='{'){
                    s.pop();
                }
                else{
                    s.push(c);
                }
            }
            else{
                s.push(c);
            }
        }

        int red_len = s.size();
        int n=0;
        while(!s.empty() && s.peek()=='{'){
            s.pop();
            n++;
        }
        return (red_len/2 + n%2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        int ans = countMinReversals(s);
        if(ans==-1){
            System.out.println("Can't be balanced");
        }
        else{
            System.out.println("Answer : " + ans);
        }
    }
}