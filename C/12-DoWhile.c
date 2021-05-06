#include<stdio.h>
void main()
{
    int i=1,j,n,count,k;
    scanf("%d",&n);
    do
    {
        k=i;
        count = 0;
        j=2;
        while(j<i)
        {
            if(k%j == 0)
            {
                count++;
                break;
            }
            j++;
        }
        i++;
        if(count == 0 && k>1)
        {
            printf("%d is a  prime number\n",k);
        }
    }
    while(i<=n);
}


