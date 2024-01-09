import java.util.*;

public class hollow_rhombus {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        // int st=1;
        int sp = n - 1;
        int spc = n - 2; 
        for (int lines = 1; lines <= n; lines++) {
            if (lines == 1 || lines == n) {
                for (int i = 0; i < sp; i++) {
                    System.out.print("  ");
                }
                for (int k = 0; k < n; k++) {
                    System.out.print("* ");
                }
            } else {
                for (int i = 0; i < sp; i++) {
                    System.out.print("  ");
                }
                System.out.print("* ");
                for (int j = 0; j < spc; j++) {
                    System.out.print("  ");
                }
                System.out.print("* ");
            }

            System.out.println();
            sp--;
        }

        sc.close();
    }
}
