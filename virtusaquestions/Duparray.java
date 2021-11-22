import java.util.*;

public class Duparray {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String numbers = scan.nextLine();
        int n = scan.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < numbers.length(); i++) {
            if (arr[i] != ' ') {
                arr[i] = numbers.charAt(i) - 48;
            }
        }
        int index = 0;
        Arrays.sort(arr);
        for (int i = 0; i < arr.length; i++) {
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
        for (int i = 0; i < index - 1; i++) {
            System.out.print(arr[i] + " ");
        }

    }
}
