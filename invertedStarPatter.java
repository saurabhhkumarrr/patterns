import java.util.*;

public class invertedStarPatter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();

        for (int line = 1; line <= n; line++) {
            for (int star = 1; star <= n + 1 - line; star++) {
                System.out.print("* ");
            }
            System.out.println();
        }
        sc.close();
    }
}

/* 




 ****
 ***
 **
 *
 


 */
