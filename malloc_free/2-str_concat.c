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
int i, k;
if (s1 == 0)
s1 = "";
if (s2 == 0)
s2 = "";
for (i = 0; s1[i] != '\0'; i++)
;
for (k = 0; s2[k] != '\0'; k++)
;
k++;
conct = malloc(i *sizeof(*s1) + k *sizeof(*s2));
if (conct == NULL)
return (NULL);
i = k = 0;
for (i = 0; s1[i] != '\0'; i++)
{
conct[i] = s1[i];
}
for (k = 0; s2[k] != '\0'; k++)
{
conct[i] = s2[k];
i++;
}
conct[i] = '\0';
return (conct);
}
