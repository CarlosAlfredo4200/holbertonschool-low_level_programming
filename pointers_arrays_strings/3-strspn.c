/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k;
int count = -1;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k - 1])
{
count++;
}
}
}
return (count);
}
