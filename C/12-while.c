#include<stdio.h>
void main()
{
    int i=1,j,n,count,k;
    scanf("%d",&n);
    while(i<=n)
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
        i++;
        if(count == 0 && k>1)
        {
            printf("%d is a  prime number\n",k);
        }
    }
}


