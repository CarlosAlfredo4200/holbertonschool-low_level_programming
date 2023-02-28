#include "main.h"
/**
 * rev_string - a function that reverses a string
 *
 * @s: This is char
 *
 */
void rev_string(char *s)
{
int k = 0;
int len = 0;
char aux;
while (s[k++])
len++;
for (k = len - 1; k >= len / 2; k--)
{
aux = s[k];
s[k] = s[len - k - 1];
s[len - k - 1] = aux;
}
}
