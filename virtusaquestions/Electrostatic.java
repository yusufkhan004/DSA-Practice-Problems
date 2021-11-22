import java.util.*;
public class Electrostatic {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        String s = scan.nextLine();
        int n = scan.nextInt();
        int[] inp = new int[n];
        int index = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) != ' ') {
                inp[index] = str.charAt(i) - 48;
                index++;
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == 'P') {
                sum = sum + inp[i];
            } else {
                sum = sum - inp[i];
            }
        }
        if (sum > 0) {
            System.out.println(sum * (-100));
        } else {
            System.out.println(sum * (100));
        }
    }
}
