import java.util.Scanner;

public class S28_Do_while {
    public static void main(String[] args) {
        int i, n1, n2, j, hcf = 1;

        Scanner input = new Scanner(System.in);
        n1 = input.nextInt();
        n2 = input.nextInt();


        j = (n1<n2) ? n1 : n2;

        i=1;

        j = (n1 < n2) ? n1 : n2;

        do {
            if (n1 % i == 0 && n2 % i == 0) {
                hcf = i;
            }
            i++;
        }
        while (i <= j);

        System.out.println("\nHCF of " + n1 + " and " + n2 + " is : \n\n" + hcf);
    }
}
