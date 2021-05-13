import java.util.Scanner;

import static java.lang.Math.*;

public class S15_for {
    public static void main(String[] args) {
        int num, swapNum;
        int fd, ld, digits;

        Scanner input = new Scanner(System.in);
        num = input.nextInt();
        ld  = num % 10;
        digits   = (int) log10(num);
        fd = (int) (num / pow(10, digits));

        swapNum  = ld;
        swapNum *= (int) round(pow(10, digits));
        swapNum += num % ((int)round(pow(10, digits)));
        swapNum -= ld;
        swapNum += fd;
        System.out.println("Number after swapping first and last digit: " + swapNum);
    }
}
