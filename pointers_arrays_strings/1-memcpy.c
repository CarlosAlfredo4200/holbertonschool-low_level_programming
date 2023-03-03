#include "main.h"
/**
 * _memcpy - fills n bytes of memory
 *
 * @dest: pointer to start of memory area
 * @src: constant byte to fill with
 * @n: num bytes to fill in
 *
 * Return: pointer to beginning of memory area best
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
