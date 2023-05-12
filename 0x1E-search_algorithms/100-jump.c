#include "search_algos.h"

/**
 * min - Function that compares two values and
 *		returns the minimum value between the two
 *
 * @a: The first value
 *
 * @b: The second value
 *
 * Return: The smallest value between the two.
 */

size_t min(size_t a, size_t b)
{
	return ((a < b) ? a : b);
}

/**
 * jump_search - Functional implementation of the jump_search algorithm
 *
 * @array: The array to be used.
 *
 * @size: The size of the array.
 *
 * @value: The value to check against in the array.
 *
 * Return: Return the index of the element if found, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t prev = 0;
	size_t step = 0;

	if (!array || !size)
		return (-1);

	/* Finding the block that finds the value */
	while (array[step] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", step, array[step]);
		prev = step;
		step += sqrt(size);

		if (step > size - 1)
			break;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	/* Linear search */
	while (prev <= min(step, size - 1))
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}

