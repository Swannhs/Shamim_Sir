#include <stdio.h>
int main()
{
    int i, j, num, count;

    scanf("%d", &num);

    printf("All Prime Factors of %d are: \n", num);
    i=2;
    do
    {
        if(num%i==0)
        {
            count++;
            j=2;
            while(j<=i/2)
            {
                if(i%j==0)
                {
                    count = 0;
                    break;
                }
                j++;
            }

            if(count >0)
            {
                printf("%d  ", i);
            }
        }
        i++;
    }
    while(i<=num);

    return 0;
}


