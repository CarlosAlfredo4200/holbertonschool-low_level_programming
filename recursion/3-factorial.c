#include "main.h"
/**
 * factorial - a function that returns the factorial of a given number.
 * @n: integer
 *
 * Return: On success
 */
int factorial(int n)
{
int res;
if (n == 0)
{
res = 1;
}
else if (n < 0)
{
res = -1;
}
else
{
res = n * factorial(n - 1);
}
return (res);
}
