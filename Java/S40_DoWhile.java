import java.util.Scanner;

public class S40_DoWhile {
    public static void main(String[] args) {
        int f1, f2, f3, n, i = 2, s = 1;
        f1 = 0;
        f2 = 1;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        do {
            f3 = f1 + f2;
            f1 = f2;
            f2 = f3;
            s = s + f3;
            i++;
        }
        while (i < n);
        System.out.println("Sum of " + n + " terms of Fibonacci Series is : " + s);
    }
}
