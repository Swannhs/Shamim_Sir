import java.util.Scanner;

public class S25_for {
    public static void main(String[] args) {
        int num, r, sum = 0, i;

        System.out.println("Input a number: ");

        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        for (i = num; num != 0; num = num / 10) {
            r = num % 10;
            sum = sum * 10 + r;
        }
        if (i == sum)
            System.out.println(i + " is a palindrome number.");
        else
            System.out.println(i + " is not a palindrome number.");
    }
}
