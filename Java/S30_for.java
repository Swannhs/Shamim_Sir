import java.util.Scanner;

public class S30_for {
    public static void main(String[] args) {
        int i, n, r, sum = 0;

        System.out.print("Input  a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (i = n; n != 0; n = n / 10) {
            r = n % 10;
            sum = sum + (r * r * r);
        }

        if (sum == i)
            System.out.print(i + " is an Armstrong number.");
        else
            System.out.print(i + " is not an Armstrong number.");
    }
}