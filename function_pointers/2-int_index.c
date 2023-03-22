#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (!(array) || size <= 0 || !(cmp))
{
return (-1);
}
for (i = 0; i < size; i++)
{
cmp(array[i]);
}
return (i);
}
