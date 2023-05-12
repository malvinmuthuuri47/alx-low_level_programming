#include "search_algos.h"

/**
 * print_array - function that prints the contents of the array
 *
 * @array: The array to print.
 *
 * @low: Beginning index of the array
 *
 * @high: The end index of the array.
 *
 * Return: Content of the array
 *
 */

void print_array(int *array, size_t low, size_t high)
{
	char *delimiter = NULL;

	printf("Searching in array: ");

	for (; low <= high; low++)
	{
		if (delimiter != NULL)
			printf("%s", delimiter);
		printf("%d", array[low]);
		delimiter = ", ";
	}

	printf("\n");
}


/**
 * binary_search - Binary search function.
 *
 * @array: The array to be passed.
 *
 * @size: Size of the array.
 *
 * @value: The value to search in the array
 *
 * Return: Index of value, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, mid, high = size - 1;

	if (!array)
		return (-1);

	print_array(array, low, high);

	while (low != high)
	{
		mid = (low + high) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;

		print_array(array, low, high);
	}

	if (array[high] == value)
		return (low);

	return (-1);
}

