import java.util.Scanner;

public class S12_while {
    public static void main(String[] args) {
        int i=1,j,n,count,k;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        while(i<=n)
        {
            k=i;
            count = 0;
            for(j=2; j<i; j++)
            {
                if(k%j == 0)
                {
                    count++;
                    break;
                }
            }
            i++;
            if(count == 0 && k>1)
            {
                System.out.println(k + " is a  prime number");
            }
        }
    }
}
