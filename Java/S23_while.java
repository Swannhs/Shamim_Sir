import java.util.Scanner;

public class S23_while {
    public static void main(String[] args) {
        long OctalNum, DeciNum = 0;
        int p = 0, digit;

        System.out.println("Enter an Octal Number");
        Scanner input = new Scanner(System.in);
        OctalNum = input.nextInt();

        while (OctalNum != 0) {

            digit = (int) (OctalNum % 10);
            DeciNum += digit * Math.pow(8, p);

            p++;
            OctalNum /= 10;
        }

        System.out.println("Decimal Number is : " + DeciNum);
    }
}
