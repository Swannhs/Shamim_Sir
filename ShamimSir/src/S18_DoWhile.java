//public class S18_DoWhile {
//    public static void main(String[] args) {
//        char b[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
//        int i, c=1;
//
//        printf("Enter %d bit binary value: ", SIZE);
//
//        gets(b);
//        i=0;
//
//        do
//        {
//            if(b[i] == '1')
//            {
//                onesComp[i] = '0';
//            }
//            else if(b[i] == '0')
//            {
//                onesComp[i] = '1';
//            }
//            i++;
//        }
//        while(i<SIZE);
//        onesComp[SIZE] = '\0';
//        i=SIZE-1;
//
//        do
//        {
//            if(onesComp[i] == '1' && c == 1)
//            {
//                twosComp[i] = '0';
//            }
//            else if(onesComp[i] == '0' && c == 1)
//            {
//                twosComp[i] = '1';
//                c = 0;
//            }
//            else
//            {
//                twosComp[i] = onesComp[i];
//            }
//            i--;
//        }
//        while( i>=0);
//        twosComp[SIZE] = '\0';
//
//        printf("Original binary = %s\n", b);
//        printf("Ones complement = %s\n", onesComp);
//        printf("Twos complement = %s\n", twosComp);
//    }
//}
