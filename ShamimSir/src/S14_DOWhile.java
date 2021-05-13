import java.util.Scanner;

public class S14_DOWhile {
    public static void main(String[] args) {
        int i, j, num, count = 0;

        Scanner input = new Scanner(System.in);
        num = input.nextByte();
        System.out.println("All Prime Factors of %d are: " + num);
        i = 2;
        do {
            if (num % i == 0) {
                count++;
                j = 2;
                while (j <= i / 2) {
                    if (i % j == 0) {
                        count = 0;
                        break;
                    }
                    j++;
                }

                if (count > 0) {
                    System.out.println(i);
                }
            }
            i++;
        }
        while (i <= num);
    }
}
