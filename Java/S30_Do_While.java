import java.util.Scanner;

public class S30_Do_While {
    public static void main(String[] args) {
        int i, n, r, sum = 0;

        System.out.print("Input  a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        i = n;
        do {
            r = n % 10;
            sum = sum + (r * r * r);
            n = n / 10;
        }
        while (n != 0);
        if (sum == i)
            System.out.print(i + " is an Armstrong number.");
        else
            System.out.print(i + " is not an Armstrong number.");
    }
}
