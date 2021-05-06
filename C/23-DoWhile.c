#include <stdio.h>
#include <math.h>

int main()
{
    long OctalNum, DeciNum=0;
    int p=0, digit;

    printf("Enter an Octal Number\n");
    scanf("%ld", &OctalNum);

    do
    {

        digit = OctalNum%10;
        DeciNum += digit*pow(8, p);

        p++;
        OctalNum /= 10;
    }
    while(OctalNum!=0);

    printf("Decimal Number is : %ld", DeciNum);

    return 0;
}

