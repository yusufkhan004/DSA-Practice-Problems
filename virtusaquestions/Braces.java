import java.util.*;

public class Braces {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        String line;
        int brace = 0;
        while (scanner.hasNext()) {
            line = scanner.nextLine();
            char[] arr = line.toCharArray();
            for (int i = 0; i < arr.length; i++) {
                if (arr[i] == '{') {
                    brace++;
                } else if (arr[i] == '}') {
                    brace--;
                }
            }
        }

        if (brace == 0) {
            System.out.println("correct");
        } else {
            System.out.println("error");
        }

    }
}

// public class Occurence {
// public static void main(String args[]) {
// if(true){
// System.out.println("hello, world!");

// }
