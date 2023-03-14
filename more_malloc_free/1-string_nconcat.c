#include <stdlib.h>
#include "main.h"
/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *newCadena;
unsigned int i, size_S1 = 0, size_S2 = 0;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (size_S1 = 0; s1[size_S1] != '\0'; size_S1++)
;
for (size_S2 = 0; s2[size_S2] != '\0'; size_S2++)
;
size_S2++;
if (n > size_S2)
{
n = size_S2;
}
newCadena = malloc(sizeof(char) * (size_S1 + n + 1));
if (newCadena == NULL)
return (0);
for (i = 0; i < size_S1; i++)
{
newCadena[i] = s1[i];
}
for (; i < (size_S1 + n); i++)
{
newCadena[i] = s2[i - size_S1];
}
newCadena[i] = '\0';
return (newCadena);
}
