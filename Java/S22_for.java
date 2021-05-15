import java.util.Scanner;

public class S22_for {
    public static void main(String[] args) {
        long b = 0, octal, place = 1, r, n;
        int OCT[] = {0, 1, 10, 11, 100, 101, 110, 111};

        System.out.println("Enter the octal Value:");
        Scanner input = new Scanner(System.in);
        octal = input.nextInt();
        n = octal;

        for (n = octal; octal > 0; octal = octal / 10) {
            r = octal % 10;
            b += (OCT[(int) r] * place);
            place *= 1000;
        }
        System.out.println("Binary Value is " + b);
    }
}
