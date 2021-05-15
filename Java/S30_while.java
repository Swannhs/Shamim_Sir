import java.util.Scanner;

public class S30_while {
    public static void main(String[] args) {
        int i, n, r, sum = 0;

        System.out.print("Input  a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        i = n;
        while (n != 0) {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        if (sum == i)
            System.out.print(i + " is an Armstrong number.");
        else
            System.out.print(i + " is not an Armstrong number.");
    }
}
