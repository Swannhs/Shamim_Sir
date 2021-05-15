import java.util.Scanner;

public class S32_DoWhile {
    public static void main(String[] args) {
        int n, i = 1, sum = 0;

        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        do {
            if (n % i == 0)
                sum = sum + i;
            i++;
        }
        while (i < n);
        if (sum == n)
            System.out.println(i + " is a perfect number");
        else
            System.out.println(i + " isn't a perfect number");
    }
}
