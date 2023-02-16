#include <stdio.h>
/**
 *main - a C program that prints the size of various types on the computer 
 *Return: 0 (Success)
 */
int main(void)
{
char carater;
int entero;
long int longEntero;
long long int llEntero;
float flotante;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(carater));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(entero));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longEntero));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(llEntero));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(flotante));
return (0);
}
