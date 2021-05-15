import java.util.Scanner;

public class S33_for {
    public static void main(String[] args) {
        int num, i = 1, sum, j;
        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        System.out.println("The perfect numbers between 1 and %d are : " + num);

        for (i = 1; i <= num; i++) {
            sum = 0;
            for (j = 1; j < i; j++) {
                if (i % j == 0) {
                    sum += j;
                }
            }
            if (sum == i) {
                System.out.println(i + " ");
            }
        }
    }
}
