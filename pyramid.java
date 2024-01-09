import java.util.*;

public class pyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        int sp = n - 1;
        int st = 1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < sp; j++) {
                System.out.print("  ");
            }
            for (int j = 0; j < st; j++) {
                System.out.print("* ");
            }
            System.out.println();
            sp--;
            st += 2;
        }

        sc.close();
    }
}

////////// ------------using while loop
// int i = 0;
// while (i < n) {
// for (int j = 0; j < sp; j++) {
// System.out.print(" ");
// }
// for (int j = 0; j < st; j++) {
// System.out.print("* ");
// }
// System.out.println();
// sp--;
// st += 2;
// i++;
// }

// sc.close();
// }
// }
