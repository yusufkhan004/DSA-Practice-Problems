import java.util.*;
public class Charity {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        int days = scan.nextInt();
        int amount = 0;
        for (int i = 1; i <= days; i++) {
            amount += (i * i);
        }
        System.out.println(amount);
    }
}
