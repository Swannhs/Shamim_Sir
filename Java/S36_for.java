import java.util.Scanner;

public class S36_for {
    public static void main(String[] args) {
        int i, j, n;
        System.out.println("Input number of rows : ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        i = 0;
        for(i=0;i<=n;i++)
        {
            for(j=1;j<=n-i;j++)
                System.out.print(" ");
            for(j=1;j<=i;j++)
                System.out.println(j);

            for(j=i-1;j>=1;j--)
                System.out.println(j);

            System.out.println();
        }
    }
}
