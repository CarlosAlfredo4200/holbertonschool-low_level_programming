#include "main.h"
/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
unsigned int bit = 1;
int i;
if (b == NULL)
return 0;
for (i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] == '1')
result += bit;
else if (b[i] != '0')
return 0;
bit <<= 1;
}
return (result);
}
