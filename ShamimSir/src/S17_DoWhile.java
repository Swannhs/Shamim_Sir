import java.util.Scanner;

public class S17_DoWhile {
    public static void main(String[] args) {
        int n, pro = 1, m;
        System.out.println("Enter a number:");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        do {
            m = n % 10;
            pro = pro * m;
            n = n / 10;
        }
        while (n > 0);
        System.out.println("product of digits is =" + pro);
    }
}
