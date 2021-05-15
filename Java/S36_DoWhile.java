import java.util.Scanner;

public class S36_DoWhile {
    public static void main(String[] args) {
        int i, j, n;
        System.out.println("Input number of rows : ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        i = 0;
        do {
            for (j = 1; j <= n - i; j++)
                System.out.println(" ");
            for (j = 1; j <= i; j++)
                System.out.println(j);
            for (j = i - 1; j >= 1; j--)
                System.out.println(j);
            System.out.println();
            i++;
        } while (i <= n);
    }
}
