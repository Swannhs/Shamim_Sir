#include<stdio.h>
void main()
{
    int i,j,n,count,k;
    scanf("%d",&n);
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
            printf("%d is a  prime number\n",i);
        }
    }
}

