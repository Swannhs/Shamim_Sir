import java.util.Scanner;

public class S6_DoWhile {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int i = 1, a, sum = 0, avg;
        do {
            a = input.nextInt();
            sum = sum + a;
            i++;
        }
        while (i <= 10);
        avg = sum / 10;
        System.out.println("sum = " + sum);
        System.out.println("avg = " + avg);
    }
}
