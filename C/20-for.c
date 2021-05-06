#include <stdio.h>
#include <math.h>
#define BASE 2

int main()
{
    long long b, d=0, tempbi;
    int n=0;

    printf("Enter any binary number: ");
    scanf("%lld", &b);



    for(tempbi=b;tempbi!=0;tempbi /= 10)
    {

        if(tempbi % 10 == 1)
        {
            d += pow(BASE, n);
        }

        n++;

    }

    printf("Decimal number is = %lld", d);

    return 0;
}
