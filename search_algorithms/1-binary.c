#include "search_algos.h"
/**
 * print_array - prints array
 * @array: sorted array of ints
 * @high: upper bound
 * @low: lower bound
 */
void print_array(int *array, size_t high, size_t low)
{size_t i;
	if (low > high)
		return;

	printf("Searching in array: ");

	for (i = low; i <= high; i++)
	{
		printf("%u", array[i]);

		if (i != high)
			printf(", ");
	}

	printf("\n");
}
/**
 * b_search - binary search helper function
 * Recursively searches for value based on midpoint
 * @array: sorted array of ints
 * @high: top end of array
 * @low: lower bound of array
 * @value: value to search for
 * Return: postion or -1 if not found
 */
int b_search(int *array, size_t high, size_t low, int value)
{
	int mid = low + (high - low) / 2;

	print_array(array, high, low);

	if (array[mid] == value)
		return (mid);
	if (high >= low)
	{
		if (array[mid] > value)
			return (b_search(array, mid - 1, low, value));
		else
			return (b_search(array, high, mid + 1, value));
	}
	return (-1);
}
/**
 * binary_search - binary search algorithm
 * @array: array of sorted ints
 * @size: size of array
 * @value: value to serach for
 * Return: position or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int ret;

	if (array == NULL)
		return (-1);

	ret = b_search(array, (int)size - 1, 0, value);
	return (ret);
}
