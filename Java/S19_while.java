import java.util.Scanner;

public class S19_while {
    public static void main(String[] args) {
        long  b, oct= 0, j = 1, r;

        System.out.println("Enter the value for  binary number: ");
        Scanner input = new Scanner(System.in);
        b = input.nextInt();
        while (b != 0)
        {
            r = b % 10;
            oct = oct + r * j;
            j = j * 2;
            b = b / 10;
        }
        System.out.println("Equivalent octal value: " + oct);
    }
}
