#include <stdlib.h>

#include <stdio.h>

#include <time.h>

//  * Fizz-Buzz - a function Fizz-Buzz

//  *@size:n is the number

//  * Return: 0

//  */

int Fizz-Buzz()
    
{
    
    int k;
    
    for (k = 0; k <= 15; k++)
	
    {
	
	if (k % 3 == 0 && k % 5 == 0)
	    
	{
	    
	    rintf("FizzBuzz\n");
	    
	}
	
	else if (k % 3 == 0)
	    
	{
	    
	    printf("Fizz\n");
	    
	}
	
	else if (k % 5 == 0)
	    
	{
	    
	    printf("Buzz\n");
	    
	}
	
	else
	    
	{
	    
	    printf("%d\n", k);
	    
	}
	
    }
    
    return (0);
    
}
