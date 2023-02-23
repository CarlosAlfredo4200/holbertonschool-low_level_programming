#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * Return: 0
 */
void print_line(int n){

    if (n > 0)
        for (i = 0; i < n; i++)
        {
            putchar('_');
        }else
        {
             putchar('\n');
        }
}
