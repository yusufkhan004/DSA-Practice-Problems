import java.util.*;
public class Category {
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        String inp = sc.nextLine();

        switch(inp){
            case "fiction": 
                System.out.println("Harry potter");
                break;
            case "non fiction":
                System.out.println("Atomic Habits");
                break;
            case "romance":
                System.out.println("A Brush With Love");
                break;
            case "instructional":
                System.out.println("Design for how people learn");
                break;
            case "history":
                System.out.println("History of modern india");
                break;
            default:
            System.out.println("No Books Available");
        }
    }
}
