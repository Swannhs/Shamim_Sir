import java.util.Scanner;

public class S14_for {
    public static void main(String[] args) {
        int i, j, num, count = 0;

        Scanner input = new Scanner(System.in);
        num = input.nextInt();

        System.out.println("All Prime Factors of %d are: " + num);


        for(i=2; i<=num; i++)
        {
            if(num%i==0)
            {
                count++;
                for(j=2; j<=i/2; j++)
                {
                    if(i%j==0)
                    {
                        count = 0;
                        break;
                    }
                }

                if(count >0)
                {
                    System.out.println(i);
                }
            }
        }
    }
}
