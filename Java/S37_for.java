import java.util.Scanner;

public class S37_for {
    public static void main(String[] args) {
        int n, r, sum = 0, t;

        System.out.println("Input a number: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        t = n;
        for(t=n;n!=0;n=n/10){
            r=n % 10;
            sum=sum*10+r;
        }
        if (t == sum)
            System.out.println(t + " is a palindrome number.");
        else
            System.out.println(t + " is not a palindrome number.");
    }
}
