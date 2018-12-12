import java.util.*;
class Descend implements Comparator<Integer>{
    public int compare(Integer a,Integer b){
        return a-b;
    }
    
}
class file{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        TreeSet<Integer> ts = new TreeSet<>(new Descend());
        Map<Integer,String> map = new HashMap<>();
        int test = sc.nextInt();
        for(int i=0;i<test;i++){
            int id = sc.nextInt();
            sc.nextLine();
            String name = sc.nextLine();
            float cgpa = sc.nextFloat();
            ts.add(id);
            map.put(id,name);
        }
        
        ArrayList<Integer> ar = new ArrayList<>();
        ar.addAll(ts);
        // System.out.println(ar);
        for(int i=0;i<ar.size();i++){
            if(map.containsKey((Integer)ar.get(i))){
                System.out.println(map.get((Integer)ar.get(i)));
            }
        }
    }
}