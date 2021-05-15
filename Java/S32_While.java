import java.util.Scanner;

public class S32_While {
    public static void main(String[] args) {
        int n, i = 1, sum = 0;

        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        while (i < n) {
            if (n % i == 0)
                sum = sum + i;
            i++;
        }
        if (sum == n)
            System.out.println(i + " is a perfect number");
        else
            System.out.println(i + " isn't a perfect number");
    }
}
