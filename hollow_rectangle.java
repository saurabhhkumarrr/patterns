import java.util.*;

public class hollow_rectangle {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        int sp = n - 2;
        int st = n;
        for (int i = 1; i <= n - 1; i++) {
            if (i == 1 || i == n - 1) {
                for (int j = 0; j < st; j++) {
                    System.out.print("* ");
                }
            } else {
                System.out.print("* ");
                for (int j = 0; j < sp; j++) {
                    System.out.print("  ");
                }
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}

///////// ------------by while loop
// int i = 1;
// while (i <= n - 1) {
// if (i == 1 || i == n - 1) {
// for (int j = 0; j < st; j++) {
// System.out.print("* ");
// }
// } else {
// System.out.print("* ");
// for (int j = 0; j < sp; j++) {
// System.out.print(" ");
// }
// System.out.print("* ");
// }
// System.out.println();
// i++;
// }
// sc.close();
// }
// }
