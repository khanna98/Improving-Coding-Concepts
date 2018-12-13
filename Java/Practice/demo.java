import java.util.*;

class file{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        Stack<Character> stk = new Stack<>();
        String s = sc.nextLine();
        char[] ch = s.toCharArray();
        int flag=0;
        for(int i=0;i<ch.length;i++){
            if(stk.isEmpty()){
                stk.push(ch[i]);
            }
            else if(ch[i]=='(' || ch[i]=='{' || ch[i]=='['){
                stk.push(ch[i]);
            }
            else if(ch[i]==')' || ch[i]=='}' || ch[i]==']'){
                char c = (Character)stk.pop();
                System.out.println(c);
                if(c!=ch[i]){
                    flag=1;
                    break;
                }
            }
        }
        
        if(flag==1){
            System.out.println("Unbalanced");
        }
        else{
            System.out.println("Balanced");
        }
    }
}