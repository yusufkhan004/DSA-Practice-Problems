// Books.java
// public class Books {
//     static String name;
//     static String genre;

//     public Books(String n, String g) {
//         name = n;
//         genre = g;
//     }
// }

// Bookrental.java
import java.util.*;

public class BookrentalPara {
    String Admin;
    String customer;
    Books books;

    public BookrentalPara(String A, String c, Books b) {
        this.Admin = A;
        this.customer = c;
        this.books = b;
    }

    void display() {
        System.out.println("Details of BookrentalPara and books");
        System.out.println("Admin name" + "= " + Admin);
        System.out.println("Customer name" + "= " + customer);
        System.out.println("Book name = " + Books.name);
        System.out.println("Book genre = " + Books.genre);

    }

    public static void main(String args[]) {
        Books book1 = new Books("Revolution 2020", "Romance");
        Books book2 = new Books("Sherlock Holmes", "Non-Fiction");

        BookrentalPara b1 = new BookrentalPara("Admin1", "Customer1", book1);
        BookrentalPara b2 = new BookrentalPara("Admin2", "Customer2", book2);

        b1.display();
        b2.display();
    }
}