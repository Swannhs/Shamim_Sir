import java.util.Scanner;

public class S33_While {
    public static void main(String[] args) {
        int num, i = 1, sum, j;
        System.out.print("Enter a number: ");
        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        System.out.println("The perfect numbers between 1 and %d are : " + num);

        while (i <= num) {
            sum = 0;
            j = 1;
            while (j < i) {
                if (i % j == 0) {
                    sum += j;
                }
                j++;
            }
            if (sum == i) {
                System.out.println(i + " ");
            }
            i++;

        }
    }
}
