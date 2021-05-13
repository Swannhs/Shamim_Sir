public class S2_DoWhile {
    public static void main(String[] args) {
        int i=1,sum=0;
        do
        {
            sum = sum + i;
            i++;
        }
        while(i<=10);
        System.out.print(" " + sum);
    }
}
