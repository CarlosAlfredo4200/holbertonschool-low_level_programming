#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments
 * @n: number of arguments
 * @...: variable list of arguments
 * Return: sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int k, res;
va_list parametros;
if (n == 0)
return (0);
va_start(parametros, n);
for (k = res = 0; k < n; k++)
{
res += va_arg(parametros, int);
}
va_end(parametros);
return (res);
}
