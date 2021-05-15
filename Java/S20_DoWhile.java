import java.util.Scanner;

import static java.lang.Math.pow;

public class S20_DoWhile {
    public static void main(String[] args) {
        int BASE = 2;
        long b, d=0, tempbi;
        int N=0;

        System.out.print("Enter any binary number: ");
        Scanner input = new Scanner(System.in);

        b = input.nextInt();

        tempbi = b;

        do
        {

            if(tempbi % 10 == 1)
            {
                d += pow(BASE, N);
            }

            N++;
            tempbi /= 10;
        }
        while(tempbi!=0);

        System.out.println("Decimal number is = " + d);
    }
}
