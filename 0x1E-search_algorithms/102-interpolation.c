#include "search_algos.h"

/**
 * interpolation_search - Function implementation of
 * interpolation search algorithm
 *
 * @array: The array to be passed to the function
 *
 * @size: The size of the array.
 *
 * @value: The value to look for in the array.
 *
 * Return: The index of the value in the array, if present
 * 0 otherwise.
 */

int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);
	return (ppf(array, 0, size - 1, value));
}

/**
 * ppf - helper function to implement the position
 * prediction formula
 *
 * @array: The array ot pass to the function
 *
 * @low: The lowest index of the array
 *
 * @high: The highest index of the array.
 *
 * @value: The value to look for in the array
 *
 * Return: The index of the value element if its present
 * in the array, 0 otherwise.
 */

int ppf(int *array, size_t low, size_t high, int value)
{
	size_t pos;

	position = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
	if (pos >= high + low)
	{
		printf("Value checked array[%ld] is out of range\n", pos);
		return (-1);
	}

	printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

	if (array[pos] == value)
	{
		return (pos);
	}
	else if (array[pos] > value)
	{
		return (ppf(array, low, high - 1, value));
	}
	else
	{
		return (ppf(array, low + 1, high, value));
	}

	return (-1);
}

