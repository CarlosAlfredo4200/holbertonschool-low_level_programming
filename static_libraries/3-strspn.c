/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *s, char *accept)
{
int i, k, existe;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
{
existe = 0;
for (k = 0; accept[k] != '\0'; k++)
{
if (accept[k] == s[i])
{
count++;
existe = 1;
}
}
if (existe == 0)
{
return (count);
}
}
return (count);
}
