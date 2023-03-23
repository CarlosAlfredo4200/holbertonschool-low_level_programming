#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print a list of strings
 * @separator: characters used to delimit
 * @n: nmber of items to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int k;
char *cadena;
va_list parametros;
va_start(parametros, n);
for (k = 0; k < n; k++)
{
cadena = va_arg(parametros, char *);
if (cadena)
{
printf("%s", cadena);
}
else
{
printf("(nil)");
}
if (separator != NULL && k < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(parametros);
}
