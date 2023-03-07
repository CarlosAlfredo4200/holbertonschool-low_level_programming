#include "main.h"
/**
*_strncat - Write a function that concatenates two strings.
*
*@dest: This is the output dest
*@src: This is the input source
*@n: This is the size
* Return: This return to dest, that concatenates two strings
*/
char *_strncat(char *dest, char *src, int n)
{
int k, count;
for (k = 0; dest[k] != '\0'; k++)
;
for (count = 0; count < n && src[count] != '\0'; count++)
{
dest[k] = src[count];
k++;
}
if (count < n)
{
dest[k] = '\0';
}
return (dest);
}
