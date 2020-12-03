#include <stdio.h>
#include <stdlib.h>


int count_bits(long);

int main()
{
    long num;
    printf("enter a number in the range of long int: \n");
    scanf("%ld",&num);
    printf("\nnumber of 1s in binary representation of %ld is: ", num);
    printf("%d",count_bits(num));
    return 0;
}

int count_bits(long x)
{
    int count=0;
    while(x != 0)
    {
        count++;
        x = x & (x-(long)1);
    }
    return count;
}



int howmanyBits(int x)
{
    unsigned in5t mask = 1;
    int count = 0;
    while(mask)
    {
        mask <<= 1;
        count++;
    }
    return count;
}
