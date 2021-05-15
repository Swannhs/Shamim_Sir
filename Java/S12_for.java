import java.util.Scanner;

public class S12_for {
    public static void main(String[] args) {
        int i, j, n, count, k;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (i = 1; i <= n; i++) {
            k = i;
            count = 0;
            for (j = 2; j < i; j++) {
                if (k % j == 0) {
                    count++;
                    break;
                }
            }
            if (count == 0 && k > 1) {
                System.out.println(i + " is a  prime number");
            }
        }
    }
}
