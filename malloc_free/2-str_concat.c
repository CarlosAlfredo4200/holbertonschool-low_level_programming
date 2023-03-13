#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
char *conct;
int i, ci;
if (s1 == NULL || s2 == NULL)
{
s1 = "";
s2 = "";
}
i = ci = 0;
while (s1[i] != '\0' && s2[ci] != '\0')
{
i++;
ci++;
}
conct = malloc(sizeof(char) * (i + ci + 1));
if (conct == NULL)
return (NULL);
i = ci = 0;
for (i = 0; s1[i] != '\0'; i++)
{
conct[i] = s1[i];
}
for (ci = 0; s2[ci] != '\0'; ci++)
{
conct[i] = s2[ci];
i++;  
}
conct[i] = '\0';
return (conct);
}
