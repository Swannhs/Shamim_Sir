import java.util.Scanner;

public class S16_while {
    public static void main(String[] args) {
        int n, sum = 0, m;
        System.out.println("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        while (n > 0) {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        System.out.println("Sum of digits is " + sum);
    }
}
