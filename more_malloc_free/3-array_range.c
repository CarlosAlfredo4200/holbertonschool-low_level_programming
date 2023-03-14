#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: minimum range of values stored
* @max: maximum range of values stored and number of elements
*
* Return: pointer to the new array
*/
int *array_range(int min, int max)
{
int *newArray;
int k;
if (min > max)
{
return (NULL);
}
newArray = malloc(sizeof(int) * (max - min + 1));
if (newArray == NULL)
{
return (0);
}
for (k = 0; min <= max; k++)
{
newArray[k] = min++;
}
return (newArray);
}
