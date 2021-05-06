#include<stdio.h>
void main()
{
    int i,j,n;
    scanf("%d",&n);
    int k,count,sum=0;
    for(i=1; i<=n; i++)
    {
        k=i;
        count = 0;
        for(j=2; j<i; j++)
        {
            if(k%j == 0)
            {
                count++;
                break;
            }
        }
        if(count == 0 && k>1)
        {
            sum=sum+k;
        }
    }
    printf("Summation of the prime numbers are : %d \n",sum);
}

