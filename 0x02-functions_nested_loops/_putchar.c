#include "main.h"
#include <unistd.h>

/**
 * putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 */

int _putchar(char c)
{
	return (Write(1, &c, 1));
}
