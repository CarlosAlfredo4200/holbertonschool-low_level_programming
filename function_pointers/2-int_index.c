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
int k;
if (!(array) || size <= 0 || !(cmp))
{
return (-1);
}
else
{
for (k = 0; k < size; k++)
{
if (cmp(array[k]))
{
return (k);
};
}
return (-1);
}
}
