import java.util.Scanner;

public class S31_for {
    public static void main(String[] args) {
        int n, i = 152, r, sum, x;

        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        System.out.println("Armstrong numbers are : ");
        {
            x = i;
            sum = 0;
            for (; i != 0; i = i / 10) {
                r = i % 10;
                sum = sum + r * r * r;
            }
            if (sum == x) {
                System.out.println(x);
                n--;
            }
            i = x;
        }
    }
}
