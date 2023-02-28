/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: void.
 */
int _atoi(char *s)
{
    int numero = 0;
    int i  = 0;
    int signo = 1;
    if (s[0] == '-')
    {
	signo = -1;
	i = 1;
    }
    for (; s[i] != '\0'; i++)
    {
	numero = numero * 10 + s[i] - '0';
    }
    numero *= signo;
    return (numero);
}
