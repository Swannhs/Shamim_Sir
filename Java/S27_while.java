import java.util.Scanner;

public class S27_while {
    public static void main(String[] args) {
        int n, num = 0;

        System.out.println("Enter any number to print in words: ");
        Scanner input = new Scanner(System.in);
        n = input.nextInt();

        while(n != 0)
        {
            num = (num * 10) + (n % 10);
            n /= 10;
        }

        while(num != 0)
        {
            switch(num % 10)
            {
                case 0:
                    System.out.println("Zero");
                    break;
                case 1:
                    System.out.println("One");
                    break;
                case 2:
                    System.out.println("Two");
                    break;
                case 3:
                    System.out.println("Three");
                    break;
                case 4:
                    System.out.println("Four");
                    break;
                case 5:
                    System.out.println("Five");
                    break;
                case 6:
                    System.out.println("Six");
                    break;
                case 7:
                    System.out.println("Seven");
                    break;
                case 8:
                    System.out.println("Eight");
                    break;
                case 9:
                    System.out.println("Nine");
                    break;
            }

            num = num / 10;
        }
    }
}
