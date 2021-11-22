import java.util.*;
public class Duplicate {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        char[] arr = a.toCharArray();
        int n = arr.length;
        int index = 0;
        for (int i = 0; i < n; i++) {
            int j;
            for (j = 0; j < i; j++) {
                if (arr[i] == arr[j]) {
                    break;
                }
            }
            if (j == i) {
                arr[index] = arr[i];
                index++;
            }
        }
        String result = String.valueOf(Arrays.copyOf(arr, index));
        System.out.println(result);
    }
}
