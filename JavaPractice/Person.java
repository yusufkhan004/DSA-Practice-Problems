
// import java.io.*;
// import java.text.*;
// import java.math.*;
// import java.util.regex.*;

// public class Person {
// public static void main(String args[]) throws Exception{
//     Scanner s = new Scanner(System.in);
//     String name = s.next();
//     int a = s.nextInt();
//     String g = s.next();
//     String name1 = s.next();
//     int a1 = s.nextInt();
//     String g1 = s.next();
//     if(name.equals(name1) && a==a1 && g.equals(g1)){
//         System.out.println("Same");
//     }
//     else{
//     System.out.println("Different");
//     }
//     }
// }
import java.util.*;

public class Person {
    private String name;
    private int age;
    private String gender;

    Person(String name, int age, String g) {
        this.name = name;
        this.age = age;
        this.gender = g;
    }
    public String getName() {
        return this.name;
    }
    public int getAge() {
        return this.age;
    }

    public String getGender() {
        return this.gender;
    }

    public void setName(String name) {
        this.name = name;
    }
    public void setAge(int age) {
        this.age = age;
    }
    public void setGender(String gender) {
        this.gender = gender;
    }


    public static void main(String[] args){
        Scanner s = new Scanner(System.in);
        String name = s.next();
        int a = s.nextInt();
        String g = s.next();
        String name1 = s.next();
        int a1 = s.nextInt();
        String g1 = s.next();

        Person obj1 = new Person(name,a, g);
        Person obj2 = new Person(name1,a1, g1);
        if (obj1.getName().equals(obj2.getName()) && obj1.getAge()== obj2.getAge() && obj1.getGender().equals(obj2.getGender())) {
            System.out.print("Same");
        } else {
            System.out.print("Different");
        }
    
    }
}

// import java.util.*;

// public class Person {
//     private String name;
//     private int age;
//     private char gender;

//     Person(String name, int age, char gender) {
//         this.name = name;
//         this.age = age;
//         this.gender = gender;
//     }

//     public String getName() {
//         return this.name;
//     }

//     public int getAge() {
//         return this.age;
//     }

//     public char getGender() {
//         return this.gender;
//     }

//     public void setName(String name) {
//         this.name = name;
//     }

//     public void setAge(int age) {
//         this.age = age;
//     }

//     public void setGender(char gender) {
//         this.gender = gender;
//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         while (sc.hasNextLine()) {

//             String name1 = sc.next();
//             int age1 = Integer.parseInt(sc.nextLine());
//             char gender1 = sc.next().charAt(0);
//             String name2 = sc.nextLine();
//             int age2 = Integer.parseInt(sc.nextLine());
//             char gender2 = sc.next().charAt(0);

//             Person obj1 = new Person(name1, age1, gender1);
//             Person obj2 = new Person(name2, age2, gender2);
//             if (obj1.equals(obj2)) {
//                 System.out.println("Same");
//             } else {
//                 System.out.println("Different");
//             }
//         }
//     }
// }