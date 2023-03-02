#include "main.h"

/**
 * leet - a function that encodes a string into 1337
 *
 * @str: This is the input string
 *
 * Return: String encodes a string into 1337
 */
char *leet(char *str)
{
int k, j;
char min[] = {'a', 'e', 'o', 't', 'l', '\0'};
char may[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char num[] = {'4', '3', '0', '7', '1', '\0'};
for (k = 0; str[k] != '\0'; k++)
{
for (j = 0; j < 5; j++)
{
if (str[k] == min[j] || str[k] == may[j])
{
str[k] = num[j];
}
}
}
return (str);
}
