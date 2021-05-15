import java.util.Scanner;

public class S25_DoWhile {
    public static void main(String[] args) {
        int num, r, sum = 0, i;

        System.out.println("Input a number: ");

        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        i = num;
        do {
            r = num % 10;
            sum = sum * 10 + r;
            num = num / 10;
        }
        while (num != 0);
        if (i == sum)
            System.out.println(i + " is a palindrome number.");
        else
            System.out.println(i + " is not a palindrome number.");
    }
}
