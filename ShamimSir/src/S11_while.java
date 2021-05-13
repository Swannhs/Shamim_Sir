import java.util.Scanner;

public class S11_while {
    public static void main(String[] args) {
        int i, j, a, b, count;
        Scanner input = new Scanner(System.in);
        a = input.nextInt();
        b = input.nextInt();
        i = a;
        int n;
        while (i <= b) {
            n = i;
            count = 0;
            j = 2;
            while (j < i) {
                if (n % j == 0) {
                    count++;
                    break;
                }
                j++;
            }
            if (count == 0 && i > 1) {
                System.out.println(i + " is a  prime number");
            }
            i++;
        }
    }
}
