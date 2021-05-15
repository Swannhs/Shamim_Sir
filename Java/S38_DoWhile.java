public class S38_DoWhile {
    public static void main(String[] args) {
        int i, sum = 0;
        System.out.println("The Numbers are: ");
        i = 101;
        do {
            if (i % 9 == 0) {
                System.out.println("    " + i);
                sum += i;
            }
            i++;
        }
        while (i < 200);
        System.out.println("\n\nThe sum : %d \n" + sum);
    }
}
