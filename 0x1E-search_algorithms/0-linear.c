#include "search_algos.h"

/**
 * linear_search - Returns the index of an element if found
 * or returns -1 if the element isn't present in the list.
 *
 * @array: The array to search.
 *
 * @size: The size of the array.
 *
 * @value: The value to search for in the array.
 *
 * Return: Index of element if successfull, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		/* check if value at index i equals search value */
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

