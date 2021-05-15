import java.util.Scanner;

public class S16_DoWhile {
    public static void main(String[] args) {
        int n, sum = 0, m;
        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        do {
            m = n % 10;
            sum = sum + m;
            n = n / 10;
        }
        while (n > 0);
        System.out.println("Sum of digits is :" + sum);
    }
}
