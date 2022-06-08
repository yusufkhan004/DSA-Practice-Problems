import java.util.*;

class Bookss{
    public static void main(String[] args){
        String books[] = new String[5];
        for(int i = 0;i< books.length;i++){
            Scanner sc = new Scanner(System.in);
            books[i] = sc.nextLine();
        }
        Arrays.sort(books, Collections.reverseOrder());
        for(int i = 0;i< books.length;i++){
            System.out.println(books[i]);
        }
    }
}