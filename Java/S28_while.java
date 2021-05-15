import java.util.Scanner;

public class S28_while {
    public static void main(String[] args) {
        int i, n1, n2, j, hcf = 1;

        Scanner input = new Scanner(System.in);
        n1 = input.nextInt();
        n2 = input.nextInt();


        j = (n1 < n2) ? n1 : n2;
        i = 1;

        while (i <= j) {

            if (n1 % i == 0 && n2 % i == 0) {
                hcf = i;
            }
            i++;
        }

        System.out.println("\nHCF of " + n1 + " and " + n2 + " is : " + hcf);
    }
}
