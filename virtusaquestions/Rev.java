import java.util.*;
public class Rev {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        // char[] a;
        String a = scan.next();
        char[] arr = a.toCharArray();
        int n = arr.length;
        char[] result = new char[n];
        for (int i = 0; i < n; i++) {
            result[i] = arr[n - i - 1];
        }
        for (int i = 0; i < n; i++) {
            System.out.print(result[i]);
        }
    }
}
