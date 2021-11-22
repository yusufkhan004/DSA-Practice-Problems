import java.util.*;
public class Stringwithinstring {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String str = scan.next();
        String finder = scan.next();
        if (finder.length() > str.length()) {
            System.out.println("NO");
        }
        if (str.contains(finder)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}
