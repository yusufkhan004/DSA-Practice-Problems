import java.util.*;
public class Anagrams {
    public static void main(String args[]) {
        Scanner scan = new Scanner(System.in);
        String s1 = scan.nextLine();
        String s2 = scan.nextLine();
        String str1 = s1.replaceAll("//s", "");
        String str2 = s2.replaceAll("//s", "");
        boolean value = true;
        if (str1 != str2) {
            value = false;
        }
        char strf[] = str1.toLowerCase().toCharArray();
        char strs[] = str2.toLowerCase().toCharArray();
        Arrays.sort(strf);
        Arrays.sort(strs);

        value = Arrays.equals(strf, strs);
        if (value) {
            System.out.println("YES, its an anagram");
        } else {
            System.out.println("NO, its not an anagrams");
        }
    }
}
