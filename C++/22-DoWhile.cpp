#include<iostream>
#include<stdlib.h>
#include<math.h>

using namespace std;
int main()
{
	long int b= 0, octal, place = 1, r;
	int OCT[] = {0, 1, 10, 11, 100, 101, 110, 111};

	cout <<"Enter the octal Value:\n";
	cin >> octal;

	do
	{
		r = octal % 10;
		b += (OCT[r]*place);
		octal = octal / 10;
		place *= 1000;
	}
	while(octal > 0);
	cout << "Binary Value is " << b;
}

