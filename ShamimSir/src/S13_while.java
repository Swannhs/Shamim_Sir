import java.util.Scanner;

public class S13_while {
    public static void main(String[] args) {
        int i, j, n;
        int k, count, sum = 0;
        i = 1;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        while (i <= n) {
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
            if (count == 0 && k > 1) {
                sum = sum + k;
            }
            i++;
        }
        System.out.println("Summation of the prime numbers are : " + sum);
    }
}
