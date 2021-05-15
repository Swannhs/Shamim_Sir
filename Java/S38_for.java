public class S38_for {
    public static void main(String[] args) {
        int i, sum = 0;
        System.out.println("The Numbers are: ");
        i = 101;
        for (i = 101; i < 200; i++) {
            if (i % 9 == 0) {
                System.out.println("    " + i);
                sum += i;
            }
        }
        System.out.println("\n\nThe sum : %d \n" + sum);
    }
}
