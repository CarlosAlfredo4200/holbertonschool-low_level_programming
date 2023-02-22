#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 *@num: integer input
 * Return: absolute value of num
 */
int _abs(int num)
{
int res, i;
if (num > 0)
return (num);
else
{
int cont = 0;
for (i = num; i < 0; i++)
{
cont++;
}
res = cont;
return (res);
}
}
