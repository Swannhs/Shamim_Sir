import java.util.Scanner;

public class S10_DoWhile {
    public static void main(String[] args) {
        int i=2,n,count = 0;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        do
        {
            if(n%i == 0)
            {
                count++;
                break;
            }
            i++;
        }
        while(i<n);
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
