import java.util.Scanner;

public class S34_for {
    public static void main(String[] args) {
        int num, r, sum = 0, temp;
        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        temp = num;
        while (num > 0) {
            int i = 1, f = 1;
            r = num % 10;
            while (i <= r) {
                f = f * i;
                i++;
            }
            sum = sum + f;
            num = num / 10;
        }
        if (sum == temp)
            System.out.println(temp + " is a strong number");
        else
            System.out.println(temp + " is not a strong number");
    }
}


// This wasn't implemented as for in C