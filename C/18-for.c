#include <stdio.h>
#define SIZE 8

int main()
{
    char b[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, c=1;

    printf("Enter %d bit binary value: ", SIZE);

    gets(b);

    for(i=0; i<SIZE; i++)
    {
        if(b[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(b[i] == '0')
        {
            onesComp[i] = '1';
        }
    }
    onesComp[SIZE] = '\0';

    for(i=SIZE-1; i>=0; i--)
    {
        if(onesComp[i] == '1' && c == 1)
        {
            twosComp[i] = '0';
        }
        else if(onesComp[i] == '0' && c == 1)
        {
            twosComp[i] = '1';
            c = 0;
        }
        else
        {
            twosComp[i] = onesComp[i];
        }
    }
    twosComp[SIZE] = '\0';

    printf("Original binary = %s\n", b);
    printf("Ones complement = %s\n", onesComp);
    printf("Twos complement = %s\n", twosComp);

    return 0;
}
