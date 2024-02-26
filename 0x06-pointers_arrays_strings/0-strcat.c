#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be altered
 * @src: string to be copied
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Copy the characters from src to dest */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* Add the null terminator at the end */
	dest[i + j] = '\0';

	/* Return the pointer */
	return (dest);
}
