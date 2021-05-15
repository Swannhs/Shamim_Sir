import java.util.Scanner;

public class S31_DoWhile {
    public static void main(String[] args) {
        int n, i = 152, r, sum, x;

        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        System.out.println("Armstrong numbers are : ");
        do {
            i++;
            x = i;
            sum = 0;
            while (i != 0) {
                r = i % 10;
                sum = sum + r * r * r;
                i = i / 10;
            }
            if (sum == x) {
                System.out.println(x);
                n--;
            }
            i = x;
        }
        while (i <= n);
    }
}
