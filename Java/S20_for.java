import java.util.Scanner;

import static java.lang.Math.pow;

public class S20_for {
    public static void main(String[] args) {
        int BASE = 2;
        long b, d = 0, tempbi;
        int n = 0;

        System.out.print("Enter any binary number: ");
        Scanner input = new Scanner(System.in);

        b = input.nextInt();

        tempbi = b;

        for (tempbi = b; tempbi != 0; tempbi /= 10) {

            if (tempbi % 10 == 1) {
                d += pow(BASE, n);
            }

            n++;

        }

        System.out.println("Decimal number is = " + d);
    }
}
