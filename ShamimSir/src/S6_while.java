import java.util.Scanner;

public class S6_while {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int i=1,a,sum=0,avg;

        while(i<=10)
        {
            a = input.nextInt();
            sum=sum+a;
            i++;
        }
        avg=sum/10;
        System.out.println("sum = " + sum);
        System.out.println("avg = " + avg);
    }
}
