#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 *main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
  int n;
  int num;
  srand(time(0));
  n = rand() - RAND_MAX / 2;
  num = n % 10;
  /* your code goes there */
  if (num > 5)
    {
      printf("Last digit of %d, and is greater than 5",num);
    }
  else if (num == 0)
    {
      printf("Last digit of %d, and is 0\n",num);
    }
  else if (n < 6 &&num != 0)
    {
      printf("Last digit of %d, and is less than 6 andnot 0\n",num);
    }
  return (0);
}
