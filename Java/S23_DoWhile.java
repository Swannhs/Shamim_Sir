import java.util.Scanner;

public class S23_DoWhile {
    public static void main(String[] args) {
        long OctalNum, DeciNum = 0;
        int p = 0, digit;

        System.out.println("Enter an Octal Number");
        Scanner input = new Scanner(System.in);
        OctalNum = input.nextInt();

        do {

            digit = (int) (OctalNum % 10);
            DeciNum += digit * Math.pow(8, p);

            p++;
            OctalNum /= 10;
        }
        while (OctalNum != 0);
        System.out.println("Decimal Number is : " + DeciNum);
    }
}
