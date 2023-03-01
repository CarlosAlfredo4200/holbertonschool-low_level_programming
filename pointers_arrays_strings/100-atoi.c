/**
 * _atoi - Convert string to an integer.
 * @s: Pointer to a character string.
 *
 * Return: void.
 */
int _atoi(char *s)
{
    
    char num_str[20];
    int num;
    int i, j, k = 0;
    int numero = 0;
    int signo = 1;

    // Buscar el inicio del número
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            break;
        }
    }

    // Copiar el número en una cadena de caracteres separada
    for (j = 0; s[j] != '\0'; j++)
    {
        if (s[i + j] >= '0' && s[i + j] <= '9')
        {
            num_str[j] = s[i + j];
        }
        else
        {
            break;
        }
    }

    if (num_str[0] == '-')
    {
        signo = -1;
        i = 1;
    }


    // Convertir la cadena de caracteres a un entero

    for (; num_str[k] != '\0'; k++)
    {
        numero = numero * 10 +  num_str[k] - '0';
        
        

         
    }
    numero *= signo;
        printf("El número es: %d\n", numero);
     


    return 0;
}
