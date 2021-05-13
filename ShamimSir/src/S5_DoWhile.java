import java.util.Scanner;

public class S5_DoWhile {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int i=1,a,sum=0;
        do
        {
            a = input.nextInt();
            sum=sum+a;
            i++;
        }
        while(i<=3);
        System.out.println(sum);
    }
}
