#include <stdio.h>
#define SIZE 8

int main()
{
    char b[SIZE + 1], onesComp[SIZE + 1], twosComp[SIZE + 1];
    int i, c=1;

    printf("Enter %d bit binary value: ", SIZE);

    gets(b);
    i=0;

    while(i<SIZE)
    {
        if(b[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(b[i] == '0')
        {
            onesComp[i] = '1';
        }
        i++;
    }
    onesComp[SIZE] = '\0';
    i=SIZE-1;

    while( i>=0)
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
        i--;
    }
    twosComp[SIZE] = '\0';

    printf("Original binary = %s\n", b);
    printf("Ones complement = %s\n", onesComp);
    printf("Twos complement = %s\n", twosComp);

    return 0;
}

