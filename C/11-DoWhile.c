#include<stdio.h>
void main()
{
    int i,j,a,b,count;
    scanf("%d%d",&a,&b);
    i=a;
    int n;
    do
    {
        n=i;
        count = 0;
        j=2;
        while(j<n)
        {
            if(n%j == 0)
            {
                count++;
                break;
            }
            j++;
        }
        if(count == 0 && i>1)
        {
            printf("%d is a  prime number\n",i);
        }
        i++;
    }
    while(i<=b);
}

