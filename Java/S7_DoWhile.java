import java.util.Scanner;

public class S7_DoWhile {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i = 1, n, fact = 1;
        n = input.nextInt();
        do {
            fact = fact * i;
            i++;
        }
        while (i <= n);
        System.out.print("Factorial = " + fact);
    }
}
