#include "search_algos.h"

/**
 * linear_search - Function that searches for a
 * value in an array of integers using the
 * Linear search algorithm.
 * @array: Pointer to the first element of the array to search.
 * @size: The number of elements in array.
 * @value: The value to search.
 * Return: If value is not present in array or
 * if array is NULL, your function must return -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
	}
	return (-1);
}
