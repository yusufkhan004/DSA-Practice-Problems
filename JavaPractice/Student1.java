class Teststudent1 {
    int id;
    String name;

    void name(int id, String name) {
        id = id;
        name = name;
    }

    void display() {
        System.out.println(id + " " + name);
    }
}

public class Student1 {
    public static void main(String args[]) {
        Teststudent1 s1 = new Teststudent1();
        s1.name(1, "Yusuf");
        s1.display();
    }
}