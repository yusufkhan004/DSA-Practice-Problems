import java.util.*;
public class Consecutive {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        Arrays.sort(arr);
        int flag = 0;
        int checker = arr[0];
        for (int i = 0; i < arr.length; i++) {
            if (checker == arr[i]) {
                checker++;
                continue;
            } else {
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            System.out.println("1");
        } else {
            System.out.println(0);
        }
    }
}
