import java.util.*;

public class number122333 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        int sp = n - 1;
        int st = 1;
        // int letter = 1;
        for (int lines = 1; lines <= n; lines++) {
            for (int i = 0; i < sp; i++) {
                System.out.print("  ");
            }
            for (int i = 0; i < st; i++) {
                System.out.print(lines + " ");
            }
            System.out.println();
            st += 2;
            sp--;
            // letter++;
        }
        sc.close();
    }
}
