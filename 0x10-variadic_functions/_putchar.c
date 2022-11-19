#include <unistd.h>

/**
 * _putchar - Function to print the character to stdout
 *
 * @c: character to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
