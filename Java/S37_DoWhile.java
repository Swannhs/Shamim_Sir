import java.util.Scanner;

public class S37_DoWhile {
    public static void main(String[] args) {
        int n, r, sum = 0, t;

        System.out.println("Input a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        t = n;
        do {
            r = n % 10;
            sum = sum * 10 + r;
            n = n / 10;
        }
        while (n != 0);
        if (t == sum)
            System.out.println(t + " is a palindrome number.");
        else
            System.out.println(t + " is not a palindrome number.");
    }
}
