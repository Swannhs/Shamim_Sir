import java.util.Scanner;

public class S21_DoWhile {
    public static void main(String[] args) {
        long b, hexa = 0, j = 1, r;

        System.out.println("Enter a binary number");
        Scanner input = new Scanner(System.in);

        b = input.nextInt();

        do {
            r = b % 10;
            hexa = hexa + r * j;
            j = j * 2;
            b = b / 10;
        }
        while (b != 0);

        System.out.println("Hexadecimal value is: " + hexa);

    }
}
