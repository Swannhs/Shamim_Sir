import java.util.Scanner;

public class S11_for {
    public static void main(String[] args) {
        int i, j, a, b;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        int n;
        for (i = a; i <= b; i++) {
            n = i;
            int count = 0;
            for (j = 2; j < i; j++) {
                if (n % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0 && i > 1) {
                System.out.println(i + " is a  prime number");
            }
        }
    }
}
