#include <stdlib.h>

#include <stdio.h>

#include <time.h>

//  * Fizz-Buzz - a function Fizz-Buzz

//  *@size:n is the number

//  * Return: 0

//  */

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
