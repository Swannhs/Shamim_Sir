import java.util.Scanner;

public class S24_DoWhile {
    public static void main(String[] args) {
        int n, rev = 0, rem;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        while (n != 0) {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }
        System.out.println("Reversed number is = " + rev);
    }
}
