#include<iostream>
using namespace std;
#include <math.h>

int main()
{
    int num, swapNum;
    int fd, ld, digits;
    cin >>num;
    ld  = num % 10;
    digits   = (int) log10(num);
    fd = (int) (num / pow(10, digits));

    swapNum  = ld;
    swapNum *= (int) round(pow(10, digits));
    swapNum += num % ((int)round(pow(10, digits)));
    swapNum -= ld;
    swapNum += fd;
    cout << "Number after swapping first and last digit: " << swapNum;

    return 0;
}
