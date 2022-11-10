#include "main.h"

/**
 * create_array - array for printing a string
 * @size: number elements array
 * @c: char
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = (char *)malloc(sizeof(char) * size);
	if (buffer == NULL)
		return (NULL);

	for (position = 0; position < size; position++)
		buffer[position] = c;

	return (buffer);
}
