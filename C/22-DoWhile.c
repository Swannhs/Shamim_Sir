#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	long int b= 0, octal, place = 1, r;
	int OCT[] = {0, 1, 10, 11, 100, 101, 110, 111};

	printf("Enter the octal Value:\n");
	scanf("%ld",&octal);

	do
	{
		r = octal % 10;
		b += (OCT[r]*place);
		octal = octal / 10;
		place *= 1000;
	}
	while(octal > 0);
	printf("Binary Value is %ld", b);
}

