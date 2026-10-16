// Andy Feng, CSCI260 HW6 Fall2024
// Drew University
#include <stdio.h>
#include <math.h>

int main(void)
{
    // read in the number
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);
    printf("%d\n",num);

    // check if num is a zero or negative
    // if zero, we are done, so simply print and terminate the program
    // if negative, find its magnitude and mark for a 2's complement operation later
    int flag = 0;
    if (num == 0)
    {
        printf("2's Complement: 0\n");
        return 0;
    }
    else if (num < 0)
    {
        flag = 1;
        num = -num;
    }

    // len is the length of the number in binary
    // however this only considers its magnitude
    int len = floor(log2(num))+1;
    // thus, the binary needs to more spots: 1 for the sign-bit and 1 for the end character
    char bin[len+2];
    // this is for keeping track of the bit in the binary sequence we just computed
    int counter = 0;

    // keep performing the short division algorithm
    while (num != 0)
    {
        // find quotient and remainder
        int quotient = num / 2;
        int remainder = num % 2;

        // recording remainders in the corresponding locations
        // don't forget this is done in reverse order
        if (remainder == 0)
            bin[len-counter] = '0';
        else
            bin[len-counter] = '1';

        // update helpers for next round
        num = quotient;
        counter++;
    }
    // set sign-bit
    bin[0] = '0';


    // now, check if we need to do a 2's complement for negative number
    if (flag == 1)
    {
        // start from the rightmost bit and move towards left
        // keep every bit unchanged until hit the first 1 bit
        // keep that first 1 bit unchanged
        int i;
        for (i = 0; i < len; i++)
        {
            if (bin[len-i] == '1')
            {
                i++;
                break;
            }
        }
        // now flip everything towards the left
        for (i = i; i <= len; i++)
        {
            if (bin[len-i] == '0')
                bin[len-i] = '1';
            else
                bin[len-i] = '0';
        }
    }

    // set the last position as the end character
    bin[len+1] = '\0';

    // 2 equivalent ways to print out the result
    printf("2's Complement: %s\n",bin);
    int i;
    printf("2's Complement: ");
    for (i = 0; i < len+1; i++)
        printf("%c",bin[i]);
    printf("\n");

    return 0;
}

