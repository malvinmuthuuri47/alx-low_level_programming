#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (1);
}

/**
 * str_concat - back a pointer to array
 * @s1: array one
 * @s2: array two
 * Return: Always an array dynamic
 */

char *str_concat(char *s1, char *s2)
{
	char *dst;

	unsigned int i, j, size;

	/*it the array is empty*/
	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	/*count size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	/*malloc*/
	dst = (char *)malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}

	/*Concatenate arrays*/
	for (i = 0; *(s1 + 1) != '\0'; i++)
		*(dst + 1) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + 1) = *(s2 + j);
		i++;
	}

	return (dst);
}
