import java.util.Scanner;

import static java.lang.Math.pow;

public class S20_While {
    public static void main(String[] args) {
        int BASE = 2;
        long b, d = 0, tempbi;
        int n = 0;

        System.out.print("Enter any binary number: ");
        Scanner input = new Scanner(System.in);

        b = input.nextInt();

        tempbi = b;

        while (tempbi != 0) {

            if (tempbi % 10 == 1) {
                d += pow(BASE, n);
            }

            n++;
            tempbi /= 10;
        }

        System.out.println("Decimal number is = " + d);
    }
}
