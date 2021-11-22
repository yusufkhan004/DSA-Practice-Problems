
class Teststudent {
    int id;
    String name;

    void takeinput(int i, String n) {
        id = i;
        name = n;
    }

    void println() {
        System.out.println("id = " + id + ", name = " + name);
    }

}

class Student {

    public static void main(String args[]) {

        Teststudent s1 = new Teststudent();
        Teststudent s2 = new Teststudent();
        s1.takeinput(12, "Arun");
        s2.takeinput(13, "Varun");
        // s1.id = 12;
        // s2.id = 14;
        // s1.name = "Arun";
        // s2.name = "Varun";
        s1.println();
        s2.println();
    }
}