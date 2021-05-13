import java.util.Scanner;

public class S17_for {
    public static void main(String[] args) {
        int i, n, pro = 1, m;
        System.out.println("Enter a number:");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for (i = n; n > 0; n = n / 10) {
            m = n % 10;
            pro = pro * m;
        }
        System.out.println("Sum is=" + pro);
    }
}
