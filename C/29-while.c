#include <stdio.h>

void main()
{
    int i, n1, n2, j, hcf=1,gcd;

    scanf("%d%d",&n1,&n2);

    j = (n1<n2) ? n1 : n2;

    i=1;

    while(i<=j)
    {

        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
         i++;
    }

        gcd =n1*n2/hcf;

    printf("\nGCD of %d and %d is : %d\n\n", n1, n2, gcd);
}


