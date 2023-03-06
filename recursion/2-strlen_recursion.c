#include "main.h"
/**
 * _strlen_recursion - Returns Length of String
 * @s: string
 *
 * Return: On (success).
 * On error, -1 is returned, and errno is set appropriately.
 */
int _strlen_recursion(char *s)
{
int count = 1;
if (*s == '\0')
{
return (0);
}
return (_strlen_recursion(s + 1) + count);
}
