#include <stdio.h>
#include <math.h>
#define BASE 2

int main()
{
    long long b, d=0, tempbi;
    int N=0;

    printf("Enter any binary number: ");
    scanf("%lld", &b);

    tempbi = b;

    while(tempbi!=0)
    {

        if(tempbi % 10 == 1)
        {
            d += pow(BASE, N);
        }

        N++;
        tempbi /= 10;
    }

    printf("Decimal number is = %lld", d);

    return 0;
}

