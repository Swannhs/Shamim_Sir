import java.util.Scanner;

public class S21_for {
    public static void main(String[] args) {
        long b, hexa = 0, j = 1, r, n;

        System.out.println("Enter a binary number");
        Scanner input = new Scanner(System.in);

        b = input.nextInt();

        for (n = b; b != 0; b = b / 10) {
            r = b % 10;
            hexa = hexa + r * j;
            j = j * 2;
        }

        System.out.println("Hexadecimal value is: " + hexa);
    }
}
