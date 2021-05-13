import java.util.Scanner;

public class S5_while {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i = 1, a, sum = 0;
        while (i <= 3) {
            a = input.nextInt();
            sum = sum + a;
            i++;
        }
        System.out.println(sum);
    }
}
