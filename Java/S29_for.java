import java.util.Scanner;

public class S29_for {
    public static void main(String[] args) {
        int i, n1, n2, j, hcf = 1, gcd;

        Scanner input = new Scanner(System.in);
        n1 = input.nextInt();
        n2 = input.nextInt();


        j = (n1 < n2) ? n1 : n2;

        i = 1;

        while (i <= j) {

            if (n1 % i == 0 && n2 % i == 0) {
                hcf = i;
            }
            i++;
        }

        gcd = n1 * n2 / hcf;

        System.out.println("\nGCD of " + n1 + " and " + n2 + " is : " + gcd);
    }
}
