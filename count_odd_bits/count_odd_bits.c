#include <stdio.h>
#include <stdlib.h>

int count_odd_bits(int);

int main()
{
   unsigned short num;
   do {
       printf("\n\nenter a number in the range of unsigned short int: \n");
       if (scanf("%hu",&num) == EOF)
         break;
       printf("\nnumber of 1s in odd places in binary representation of %u is: ", num);
       printf("%u\n",count_odd_bits(num));
   }while(1);
   return 0;
}

int count_odd_bits(int num)
{
    int count = 0;
    unsigned short mask = 0;
    unsigned short num_odds;

    /*build mask*/
    while(mask < num) {
        mask <<= 1;
        mask++;
        mask <<= 1;
    }

    num_odds = mask & num;
    while(num_odds != 0)
    {
        count++;
        num_odds = num_odds & (num_odds-(long)1);
    }
    return count;
}
