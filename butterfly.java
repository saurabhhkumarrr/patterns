import java.util.*;

public class butterfly {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        int st = 1;
        int sp = 2 * n - 2;
        for (int lines = 1; lines <= 2 * n; lines++) {
            for (int i = 0; i < st; i++) {
                System.out.print("*  ");
            }
            for (int i = 0; i < sp; i++) {
                System.out.print("   ");
            }
            for (int i = 0; i < st; i++) {
                System.out.print("*  ");
            }
            // System.out.println();
            if (lines < n) {
                st++;
                sp -= 2;
            } else if (lines > n) {
                st--;
                sp += 2;
            } 
            System.out.println();
        }
        sc.close();
    }
}
