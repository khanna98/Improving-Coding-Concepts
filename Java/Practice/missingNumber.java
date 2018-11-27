import java.util.*;

class MissingPositiveNumber {
    public int firstMissingPositive(ArrayList<Integer> A) {
        int ans=0;
        if (A.contains(0)) {
            for(int i=1;i<A.size();i++){
                int a = A.get(i);
                if(a==0){
                    ans = A.get(i-1);
                }
            }
        } else {
            int x1 = A.get(0);
            int x2 = 1;
            for (int i = 1; i < A.size(); i++) {
                int a = A.get(i);
                x1 = x1 ^ a;
            }
            for (int i = 2; i <= A.size() + 1; i++) {
                x2 = x2 ^ i;
            }
            ans =(x1 ^ x2);
        }
        return ans;
    }
}

class file {
    public static void main(String[] args) {
        int n;
        MissingPositiveNumber obj = new MissingPositiveNumber();
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        ArrayList<Integer> ls = new ArrayList<>();

        while (ls.size() < num) {
            n = sc.nextInt();
            ls.add(n);
        }
        int posNum = obj.firstMissingPositive(ls);
        System.out.println(posNum);
    }
}