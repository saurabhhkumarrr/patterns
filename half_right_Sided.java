import java.util.*;

public class half_right_Sided {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        int sp = n - 1;
        int st = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = 0; j < sp; j++) {
                System.out.print("  ");
            }
            for (int j = 0; j < st; j++) {
                System.out.print("* ");
            }
            System.out.println();
            sp--;
            st++;
        }
        sc.close();
        
    }
}

////////////////////////////// ---- using While loop
// int i = 0;
// while (i < n) {
// for (int j = 0; j < sp; j++) {
// System.out.print(" ");
// }
// for (int j = 0; j <= i; j++) {
// System.out.print("* ");
// }
// System.out.println();
// sp--;
// st++;
// i++;
// }
// sc.close();
// }}
