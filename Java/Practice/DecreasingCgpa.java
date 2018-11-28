// You are using Java
import java.util.*;

class Student{
    public String name;
    public String id;
    public String cgpa;
    Student(){
        this.name = "";
        this.id = "";
        this.cgpa = "";
    }
    
    void setName(String name){
        this.name = name;
    }
    
    void setId(String id){
        this.id = id;
    }
    
    void setCgpa(String cgpa){
        this.cgpa = cgpa;
    }
    
    public String getName(){
        return this.name;
    }
    
    public String getId(){
        return this.id;
    }
    
    public String getCgpa(){
        return this.cgpa;
    }
    
}

class Sorting implements Comparator<Student>{
    public int compare(Student a,Student b){
        return a.id.compareTo(b.id);
    }
}

class file{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        
        List<Student> stList = new ArrayList<Student>();
        
        String id;
        String name;
        String cgpa;
        int n = sc.nextInt();
        String demo = sc.nextLine();
        for(int i=0;i<n;i++){
            Student st = new Student();
            
            id = sc.nextLine();
            //System.out.print(id + " ");
            st.setId(id);
            name = sc.nextLine();
            //System.out.print(name + " ");
            st.setName(name);
            cgpa = sc.nextLine();
            //System.out.println(cgpa);
            st.setCgpa(cgpa);
            stList.add(st);
        }
        //System.out.println(stList);
        Collections.sort(stList,new Sorting());
        //System.out.println(stList.size());
        
        for(int i=0;i<stList.size();i++){
            Student temp;
            temp = stList.get(i);
            System.out.println(temp.name);
        }
    }
}