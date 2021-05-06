#include <stdio.h>
void main()
{
    int n, i, j, ctr, r;
    printf(" Input any number: ");
    scanf("%d",&n);
    for (i = 0; i < 10; i++)
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
    }
}
