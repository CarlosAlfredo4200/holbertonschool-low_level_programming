#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @dest: This is the output dest
 * @src: This is the input source
 *
 *Return: this is res
 */
int _strcmp(char *s1, char *s2)
{
int res = 0;
int countS1 = 0;
int countS2 = 0;
for (int k = 0; s1[k] != '\0'; k++)
{
countS1++;
}
for (int k = 0; s2[k] != '\0'; k++)
{
countS2++;
}
if (countS1 < countS2)
{
res = -15;
}
else if (countS2 < countS1)
{
res = 15;
}
return (res);
}
