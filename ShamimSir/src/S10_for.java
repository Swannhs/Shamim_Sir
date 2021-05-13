import java.util.Scanner;

public class S10_for {
    public static void main(String[] args) {
        int i,n,count = 0;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for(i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0)
        {
            System.out.println(n + " is a  prime number");
        }
        else
        {
            System.out.println(n + " is not a  prime number");
        }
    }
}
