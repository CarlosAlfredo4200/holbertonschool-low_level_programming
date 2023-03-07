#include "main.h"
/**
* _strcpy - Copiar el contenido de uno a otra variable
* @dest: This is destiny
* @src: This is the copia
*
* Return: This return copy
*/
char *_strcpy(char *dest, char *src)
{
int k;
for (k = 0; src[k] != '\0'; k++)
{
dest[k] = src[k];
}
dest[k++] = '\0';
return (dest);
}
