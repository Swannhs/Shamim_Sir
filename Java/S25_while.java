import java.util.Scanner;

public class S25_while {
    public static void main(String[] args) {
        int num, r, sum = 0, i;

        System.out.println("Input a number: ");

        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        i = num;
        while (num != 0) {
            r = num % 10;
            sum = sum * 10 + r;
            num = num / 10;
        }
        if (i == sum)
            System.out.println(i + " is a palindrome number.");
        else
            System.out.println(i + " is not a palindrome number.");
    }
}
