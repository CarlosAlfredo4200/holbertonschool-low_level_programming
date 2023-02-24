#include <stdlib.h>

#include <stdio.h>

#include <time.h>

/**
 * main - main block, solve fizz buzz from numbers 1 to 100
 * Description: Multiples of 3, print Fizz. Multiples of 5, print Buzz.
 * Multiples of both 3 and 5 should print FizzBuzz.
 * Return: 0
 */

int main()
{
    int k;
    for (k = 1; k <= 15; k++)
    {
        if (k % 3 == 0 && k % 5 == 0)
        {
            printf("FizzBuzz ");
        }
        else if (k % 3 == 0)
        {
            printf("Fizz ");
        }
        else if (k % 5 == 0)
        {
            printf("Buzz ");
        }
        else
        {
            printf("%d\n ", k);
        }
    }
    return (0);
}
