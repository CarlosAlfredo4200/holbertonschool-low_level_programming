#include <stdlib.h>
#include <stdio.h>
/**
* print_to_98 - a function that prints all natural numbers from n to 98
* user input's number prints to 98, regardless < 98 or > 98
* @n: number input
* Return: Always 0 (Success)
*/
void print_to_98(int n)
{
int num;
if (n < 98)
{
for (num = n; num <= 98; num++)
{
if (num != 98)
printf("%d, ", num);
else
{
printf("%d", num);
}
}
}
else
{
for (num = n; num >= 98; num--)
{
if (num != 98)
printf("%d, ", num);
else
{
printf("%d", num);
}
}
}
}
