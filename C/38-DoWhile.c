#include <stdio.h>

void main()
{
    int i, sum=0;
    printf("The Numbers are: \n");
    i=101;
    do
    {
        if(i%9==0)
        {
            printf("% 5d",i);
            sum+=i;
        }
        i++;
    }
    while(i<200);
    printf("\n\nThe sum : %d \n",sum);
}


