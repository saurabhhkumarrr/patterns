import java.util.*;

public class pelindrome121 {
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
            int letter = lines;
            for (int i = 0; i < st; i++) {
                System.out.print(letter + " ");

                if (i < st / 2) {
                    letter--;
                } else
                    letter++;
            }
            System.out.println();

            st += 2;
            sp--;
        }
        sc.close();
    }
}
