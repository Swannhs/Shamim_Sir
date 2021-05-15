import java.util.Scanner;

public class S5_for {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int i, a, sum = 0;
        for (i = 1; i <= 3; i++) {
            a = input.nextInt();
            sum = sum + a;
        }
        System.out.println(sum);
    }
}
