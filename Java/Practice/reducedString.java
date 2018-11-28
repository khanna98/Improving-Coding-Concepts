import java.util.*;
import java.lang.*;
import java.io.*;

class file {
    public static void main(String[] args) throws IOException {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int n = Integer.parseInt(br.readLine());
            for (int i = 0; i < n; i++) {
                int count = 0;
                Stack<Character> stk = new Stack<>();
                String str = br.readLine();

                char[] arr = str.toCharArray();
                for (int j = 0; j < arr.length; j++) {
                    if (stk.isEmpty() || stk.peek() != arr[j]) {
                        stk.push(arr[j]);
                    } else if (stk.peek() == arr[j]) {
                        char c = stk.pop();
                        count++;
                    }
                }

                if ((count * 2) == arr.length) {
                    System.out.println(str);
                } else {
                    List<Character> li = new ArrayList<>();
                    li.addAll(stk);
                    for(int j=0;j<li.size();j++){
                        System.out.print(li.get(j));
                    }
                    System.out.println();
                }
            }
        } catch (Exception e) {}
    }
}