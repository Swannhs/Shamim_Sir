#include <stdio.h>
void main()
{
    int n, i, j, ctr, r;
    printf(" Input any number: ");
    scanf("%d",&n);
    i = 0;
    while( i < 10)
    {
        printf("The frequency of  %d = ",i);
        ctr = 0;
        for (j = n; j > 0; j = j / 10)
        {
            r = j % 10;
            if (r == i)
            {
                ctr++;
            }
        }
        printf("%d",ctr);
        printf("\n");
        i++;
    }
}
