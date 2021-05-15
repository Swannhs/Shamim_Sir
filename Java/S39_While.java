import java.util.Scanner;

public class S39_While {
    public static void main(String[] args) {
        int prv = 0, pre = 1, t, i, n;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        System.out.println("Fibonacci series upto  to " + n + " terms are : ");
        System.out.println(prv + "  " + pre);
        i = 3;

        while (i <= n) {
            t = prv + pre;
            System.out.println(t + "   ");
            prv = pre;
            pre = t;
            i++;
        }
    }
}
