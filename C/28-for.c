#include <stdio.h>

void main()
{
    int i, n1, n2, j, hcf=1;

    scanf("%d%d",&n1,&n2);

    j = (n1<n2) ? n1 : n2;

    for(i=1; i<=j; i++)
    {

        if(n1%i==0 && n2%i==0)
        {
            hcf = i;
        }
    }

    printf("\nHCF of %d and %d is : %d\n\n", n1, n2, hcf);
}
