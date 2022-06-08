import java.util.*;
public class Linearsearch {

    public static void main(String a[]) {
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
        int key = scan.nextInt();
        int flag = 0;

        for (int i = 0; i < name.length; i++) {
                if(Integer.parseInt(name[i][0]) == key ){
                    for(int j = 0; j < col; j++){
                        System.out.print(name[i][j] + " ");
                        flag = 1;
                    }
                    if(flag == 1){
                        break;
                    }
            }
        }
    }
}
