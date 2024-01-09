import java.util.*;

public class charPattern {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        char ch = 'A';
        for (int line = 1; line <= n; line++) {
            for (int character = 1; character <= line; character++) {
                System.out.print(" " + ch);
                ch++;
            }
            System.out.println();
        }
        sc.close();
    }
}
