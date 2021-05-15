import java.util.Scanner;

public class S7_while {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i = 1, n, fact = 1;
        n = input.nextInt();
        while (i <= n) {
            fact = fact * i;
            i++;
        }
        System.out.println("Factorial = " + fact);
    }
}
