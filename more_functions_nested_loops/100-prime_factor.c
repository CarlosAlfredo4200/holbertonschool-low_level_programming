#include <stdlib.h>
#include <stdio.h>
/**
* main - main block
* Description: Find and print the largest prime factor of the number
* 612852475143
* Return: 0
*/
int main()  
{
long long int num = 612852475143;
int factor = 2;
while (num > 1)	
{
if (num % factor == 0)
{
num = num / factor;
printf("%d\n", factor);
}
else	    
{
factor++;
}
}    
return (0);
}
