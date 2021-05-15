import java.util.Scanner;

public class S6_for {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int i, a, sum = 0, avg;

        for (i = 1; i <= 10; i++) {
            a = input.nextInt();
            sum = sum + a;
        }
        avg = sum / 10;
        System.out.println("sum = " + sum);
        System.out.println("avg = " + avg);
    }
}
