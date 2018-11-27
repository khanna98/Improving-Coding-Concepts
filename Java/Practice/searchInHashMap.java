import java.util.*;

class Student {
    private String name, department, emailId;

    // You are using Java
    Student() {
        this.name = name;
        this.department = department;
        this.emailId = emailId;
    }

    void setName(String name) {
        this.name = name;
    }

    void setEmailId(String emailId) {
        this.emailId = emailId;
    }

    void setDepartment(String department) {
        this.department = department;
    }

    public String getName() {
        return this.name;
    }

    public String getDept() {
        return this.department;
    }

    public String getEmail() {
        return this.emailId;
    }

}

class SearchStudent extends Student {
    SearchStudent() {

    }

    void searchStudent(Map<String, Student> mapStudent, String id) {
        // System.out.println(id);
        id = id.toUpperCase();
        if (mapStudent.containsKey(id)) {
            System.out.println("Student Details");

            Student st = mapStudent.get(id);
            System.out.println(st.getName() + " " + st.getEmail() + " " + st.getDept());
        }
    }
}

class file {
    public static void main(String args[]) {
        SearchStudent stud = new SearchStudent();
        List<Student> lstStudent = new ArrayList<>();
        ;
        Map<String, Student> mapStudent = new HashMap<>();
        Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the number of students");
        int n = sc.nextInt();
        String id, name, email, dept;

        if (n > 0) {
            for (int i = 0; i < n; i++) {
                Student st = new Student();
                // .out.println("Enter the details of student "+(i+1));
                id = sc.next();
                name = sc.next();
                st.setName(name);
                email = sc.next();
                st.setEmailId(email);
                dept = sc.next();
                st.setDepartment(dept);

                lstStudent.add(st);
                mapStudent.put(id, lstStudent.get(i));

            }
            id = sc.next();
            stud.searchStudent(mapStudent, id);
        } else {
            System.out.println("No Record To Display");
        }

    }

}