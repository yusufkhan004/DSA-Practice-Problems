// Books.java
// public class Books {
//     static String name;
//     static String genre;

//     public Books(String name, String genre) {
//         this.name = name;
//         this.genre = genre;
//     }
// }

// Bookrental.java
import java.util.*;

public class Bookrental {
    String Admin;
    String customer;
    Books books;

    public Bookrental(String Admin,String customer,Books book){
        this.Admin = Admin;
        this.customer = customer;
        this.books = book;
    }

    void display() {
        System.out.println("Details of Bookrental and books");
        System.out.println("Admin name" +"= " + Admin);
        System.out.println("Customer name" +"= " +customer);
        System.out.println("Book name = " + Books.name);
        System.out.println("Book genre = " + Books.genre);
        System.out.println();

    }
    public static void main(String args[]){
        Books book1 = new Books("Revolution 2020", "Romance");
        Books book2 = new Books("Sherlock Holmes", "Non-Fiction");

        Bookrental b1 = new Bookrental("Admin1","Customer1",book1);
        Bookrental b2 = new Bookrental("Admin2", "Customer2", book2);

        b1.display();
        b2.display();
    }
}