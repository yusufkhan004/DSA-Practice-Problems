class A {
    A() {
        // this(5);
        System.out.println("Hello A");
    }

    A(int x) {
        this();
        System.out.println("Hello Parameterized A");
    }
}

public class Thiskey {
    public static void main(String[] args) {
        A a = new A(19);
    }
}
