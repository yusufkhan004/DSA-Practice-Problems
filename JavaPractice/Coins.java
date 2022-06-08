import java.util.Scanner;

public class Coins {
    public static void main(String[] args) {
        int size , notes;
        size = 6;
        int denominations[] = new int[]{500, 100,50, 10, 5, 1};
        Scanner sc = new Scanner(System.in);
        int amount = sc.nextInt();
        int value = 0;

        if(amount < 0){
            System.out.print("Invalid Input");
        }else{
            for (int i = 0; i < size; i++) {
                notes = amount / denominations[i];

                if (notes != 0) {
                    amount = amount % denominations[i];

                    // System.out.println(notes + "*" + denominations[i] + "=" + notes *
                    // denominations[i]);
                    value += notes;

                }
            }
            System.out.print(value);
        }
        
    }    
}
