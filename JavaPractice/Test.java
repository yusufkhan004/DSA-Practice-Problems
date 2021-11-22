public class Test {

    // public static int[] NonZeros(int[] A) {
    // int nonz = 0;
    // for (int i = 0; i < A.length; i++)
    // if (A[i] != 0)
    // nonz++;

    // int[] result = new int[nonz];
    // int j = 0;
    // for (int k = 0; k < A.length; k++) {
    // if (A[k] != 0) {
    // result[j] = A[k];
    // j++;
    // }
    // }

    // return result;
    // }

    // public static void PrintArray(int[] A) {
    // for (int i = 0; i < A.length; i++) {
    // System.out.print(A[i]);
    // if (i < A.length - 1)
    // System.out.print(" ");
    // }
    // }

    public static void main(String args[]) throws Exception {
        // int[] A = { 0, 1, 2, 3, 2 };
        // System.out.println("Passing");
        // PrintArray(A);
        // A = NonZeros(A);
        // System.out.println();
        // System.out.println("Got back");
        // PrintArray(A);
        // System.out.println();

        // int[] B = { 0, 0 };
        // System.out.println("Passing");
        // PrintArray(B);
        // B = NonZeros(B);
        // System.out.println();
        // System.out.println("Got back");
        // PrintArray(B);
        // System.out.println();

        // Thread.sleep(70);
        // System.out.println("reached");
        byte x = 64;
        int i;
        byte y; 
        i = x << 2;
        y = (byte) (x << 2);
        System.out.print(i + " " + y);
    }
}
