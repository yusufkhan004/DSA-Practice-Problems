class Foo{
    Foo(){
        System.out.println("Foo");
    }
}


public class Bar extends Foo {

    Bar(){
        System.out.println("Bar");
        // super();
        // this("Bar");
    }
    Bar(String arg){
        System.out.println(arg);
    }

    public static void main(String[] args){
        new Bar();
    }
    
}



// Exception handling using try catch finally
// public class Bar{
//     public static void main(String[] args){
//         try{
//             Bar Bar = new Bar();
//             Bar.isNegative(-1);
//             System.out.println("try");
//         }catch(Exception e){
//             System.out.println("catch");
//         }finally{
//             System.out.println("finally");
//         }
//     }

//     void isNegative(int input){
//         if(input >=0)
//         throw new RuntimeException();
//     }
// }