import java.util.Scanner;

public class S35_for {
    public static void main(String[] args) {
        int num, i, f, r, sum, temp;
        int max;
        System.out.print("Enter maximum range: ");
        Scanner input = new Scanner(System.in);
        max = input.nextInt();
        System.out.println("Strong numbers in given range are: ");

        for (num = 1; num <= max; num++) {
            temp = num;
            sum = 0;
            while (temp > 0) {
                i = 1;
                f = 1;
                r = temp % 10;
                while (i <= r) {
                    f = f * i;
                    i++;
                }
                sum = sum + f;
                temp = temp / 10;
            }
            if (sum == num)
                System.out.println(num);
        }
    }
}
