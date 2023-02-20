#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*
*Return: Always 0 (success)
*/
int main(void)
{
char a;
char b;
char f;
a = 'a';
b = 'A';
  
while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'Z')
{
putchar(b);
b++;
}
putchar(f);
putchar("\n");
return (0);
}
