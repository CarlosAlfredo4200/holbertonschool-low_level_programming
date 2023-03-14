#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
int *puntero;
puntero = (int *)malloc(b * sizeof(unsigned int));
if (puntero == NULL)
{
exit(98);
}
return (puntero);
}
