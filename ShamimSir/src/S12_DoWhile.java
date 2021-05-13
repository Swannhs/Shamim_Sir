import java.util.Scanner;

public class S12_DoWhile {
    public static void main(String[] args) {
        int i = 1, j, n, count, k;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        do {
            k = i;
            count = 0;
            j = 2;
            while (j < i) {
                if (k % j == 0) {
                    count++;
                    break;
                }
                j++;
            }
            i++;
            if (count == 0 && k > 1) {
                System.out.println(k + " is a  prime number");
            }
        }
        while (i <= n);
    }
}
