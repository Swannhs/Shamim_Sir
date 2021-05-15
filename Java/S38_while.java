public class S38_while {
    public static void main(String[] args) {
        int i, sum = 0;
        System.out.println("The Numbers are: ");
        i = 101;
        while (i < 200) {
            if (i % 9 == 0) {
                System.out.println("    " + i);
                sum += i;
            }
            i++;
        }
        System.out.println("\n\nThe sum : %d \n" + sum);
    }
}
