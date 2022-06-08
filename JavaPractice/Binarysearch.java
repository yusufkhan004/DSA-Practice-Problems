import java.util.*;
public class Binarysearch {
    public static void main(String args[]) {

        String name[][] = new String[3][3];
        int col = 3;
        System.out.println("Enter 3 customer details");
        for (int i = 0; i < name.length; i++) {
            for (int j = 0; j < col; j++) {
                Scanner sc = new Scanner(System.in);
                name[i][j] = sc.nextLine();
            }
        }

        System.out.println("Enter the Customer ID");
        Scanner scan = new Scanner(System.in);
        String key = scan.nextLine();
        int flag = 0;

        Arrays.sort(name);
        
        
    }
}    

