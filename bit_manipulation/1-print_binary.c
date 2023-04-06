#include "main.h"
/**
 * print_binary - prints decimal as binary
 * @n: long integer
 */
void print_binary(unsigned long int n)
{
  if (n > 1)
    print_binary(n >> 1);

 _putchar((n & 1) ? '1' : '0');
}
