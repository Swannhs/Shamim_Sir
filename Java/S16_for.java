import java.util.Scanner;

public class S16_for {
    public static void main(String[] args) {
        int i, n, sum = 0, m;
        System.out.println("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (i = n; n > 0; n = n / 10) {
            m = n % 10;
            sum = sum + m;
        }
        System.out.println("Sum is: " + sum);
    }
}
