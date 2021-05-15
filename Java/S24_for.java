import java.util.Scanner;

public class S24_for {
    public static void main(String[] args) {
        int i, n, rev = 0, rem;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (i = n; n != 0; n /= 10) {
            rem = n % 10;
            rev = rev * 10 + rem;
        }
        System.out.println("Reversed number is = " + rev);
    }
}
