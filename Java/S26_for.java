import java.util.Scanner;

public class S26_for {
    public static void main(String[] args) {
        int n, i, j, ctr, r;
        System.out.print(" Input any number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        i = 0;
        for (i = 0; i < 10; i++)
        {
            System.out.println("The frequency of = " + i);
            ctr = 0;
            for (j = n; j > 0; j = j / 10)
            {
                r = j % 10;
                if (r == i)
                {
                    ctr++;
                }
            }
            System.out.println(ctr);
            i++;
        }
    }
}
