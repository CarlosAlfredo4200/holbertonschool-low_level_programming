#include "main.h"
/**
 * print_numbers - a function that prints the numbers, from 0 to 9
 * Return: 1 if int c is is a digit, 0 if otherwise
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
