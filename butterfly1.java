public class butterfly1 {
    public static void main(String[] args) {
        for (int line = 1; line <= 6; line++) {
            for (int star = 1; star <= line; star++) {
                System.out.print("*");
            }
            for (int space = 1; space <= 12 - line * 2; space++) {
                System.out.print(" ");
            }
            for (int star = 1; star <= line; star++) {
                System.out.print("*");
            } ////////////// /////////////////-----------------------my created algorithm
            System.out.println();
        }

        for (int line = 5; line >= 1; line--) {
            for (int star = line; star >= 1; star--) {
                System.out.print("*");
            }
            for (int space = 12 - line * 2; space >= 1; space--) {
                System.out.print(" ");
            }
            for (int star = line; star >= 1; star--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}

/*
 * 
 * *
 ** **
 *** ***
 **** ****
 ***** *****
 ************
 ***** *****
 **** ****
 *** ***
 ** **
 * *
 * 
 */
