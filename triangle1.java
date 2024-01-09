import java.util.*;

public class triangle1 {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of lines : ");
        int n = sc.nextInt();
        for (int line = 1; line <= n; line++) {
            for (int space = 1; space <= n - line; space++) {
                System.out.print("   ");
            }
            for (int star = 1; star <= line * 2 - 1; star++) {
                System.out.print("*  ");
            }
            System.out.println();
        }
//////////////////////-------------------------------------------------------my created algorithm
        for (int line = n - 1; line >= 1; line--) {
            for (int space = (n - 1) + 1 - line; space >= 1; space--) {
                System.out.print("   ");
            }
            for (int star = line * 2 - 1; star >= 1; star--) {
                System.out.print("*  ");
            }
            System.out.println();
        }
        sc.close();
    }
}

/*



     *
    ***
   *****
  *******
   *****
    ***
     *
     


 */
