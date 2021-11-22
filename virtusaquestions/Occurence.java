import java.util.*;
public class Occurence {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();
        char check = scan.next().charAt(0);
        char[] arr = s.toCharArray();
        int index = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != check) {
                arr[index] = arr[i];
                index++;
            }
        }
        String result = String.valueOf(Arrays.copyOf(arr, index));
        System.out.println(result);
        System.out.println(arr[6]);
    }
}
