import java.util.Scanner;

public class S40_for {
    public static void main(String[] args) {
        int f1, f2, f3, n, i = 2, s = 1;
        f1 = 0;
        f2 = 1;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (i = 2; i < n; i++) {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            s = s + f3;
        }
        System.out.println("Sum of " + n + " terms of Fibonacci Series is : " + s);
    }
}
