#include "main.h"
/**
 * set_bit - sets a bit to 1 at a given index
 * @n: pointer to integer
 * @index: index to set to 1
 *
 * Return: 1 if succeeded of -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}
*n |= (1UL << index);
return (1);
}
