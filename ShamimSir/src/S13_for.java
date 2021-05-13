import java.util.Scanner;

public class S13_for {
    public static void main(String[] args) {
        int i,j,n;
        int k,count,sum=0;
        Scanner input = new Scanner(System.in);
        n = input.nextInt();
        for(i=1; i<=n; i++)
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
            if(count == 0 && k>1)
            {
                sum=sum+k;
            }
        }
        System.out.println("Summation of the prime numbers are : " + sum);
    }
}
