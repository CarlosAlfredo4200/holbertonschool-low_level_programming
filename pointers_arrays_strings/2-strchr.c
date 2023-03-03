#include <stdio.h>
#include "main.h"
/**
 * _strchr - finds if char occurs in string
 *
 * @s: string to check
 * @c: character to find in s
 *
 * Return: of c, NULL
 */
char *_strchr(char *s, char c)
{
int k;
for (k = 0; s[k] >='\0'; k++)
{
if (s[k] == c)
{
return (s + k);
}
}
return (NULL);
}
