import java.util.*;
public class Customer {

    public static void Sort2DArrayBasedOnColumnNumber(String[][] name, final int columnNumber) {
        Arrays.sort(name);
    }
    public static void main(String args[]){
        String name[][] = new String[5][5];
        int col = 3;
        for (int i = 0;i< name.length;i++){
            for(int j = 0;j<col;j++){
                Scanner sc = new Scanner(System.in);
                name[i][j]=  sc.nextLine();
            }
        }

        for (int i = 0; i < name.length; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.println(name[i][j] + " ");
            }
            System.out.println();
        }
        Sort2DArrayBasedOnColumnNumber(name, 3);
        for (int i = 0; i < name.length; i++) {
            for (int j = 0; j < name[i].length; j++)
                System.out.print(name[i][j] + " ");
            System.out.println();

        }
        
    }
}
