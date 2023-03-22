#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: input array
 * @size: size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;
if (array != NULL)
{
if (size)
{
for (k = 0; k < size; k++)
{
action(array[k]);
}
}
}
}
