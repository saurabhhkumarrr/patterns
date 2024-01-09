import java.util.*;

public class diamond_ {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        int sp = n - 1;
        int st = 1;
        for (int lines = 1; lines <= 2 * n - 1; lines++) {
            for (int i = 0; i < sp; i++) {
                System.out.print("  ");
            }
            for (int i = 0; i < st; i++) {
                System.out.print("* ");
            }
            if (lines < n) {
                sp--;
                st += 2;
            } else {
                sp++;
                st -= 2;
            }
            System.out.println();
        }
        sc.close();
    }
}
