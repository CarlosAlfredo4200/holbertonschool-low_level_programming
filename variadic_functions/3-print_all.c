#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - Entry Point
 * c = char, i = int, f = float, s = char * (if null print (nil))
 * @format: list of arg types
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list parametros;
	int n = 0, i = 0;
	char *separator = ", ";
	char *cadena;

	va_start(parametros, format);

	while (format && format[i])
	i++;
while (format && format[n])
	{
	if (n  == (i - 1))
	{
	separator = "";
	}
	switch (format[n])
	{
	case 'c':
	printf("%c%s", va_arg(parametros, int), separator);
	break;
	case 'i':
	printf("%d%s", va_arg(parametros, int), separator);
	break;
	case 'f':
	printf("%f%s", va_arg(parametros, double), separator);
	break;
	case 's':
	cadena = va_arg(parametros, char *);
	if (cadena == NULL)
{
cadena = "(nil)";
}	
	printf("%s%s", cadena, separator);
	break;
	}
	n++;
	}
	printf("\n");
	va_end(parametros);
}
