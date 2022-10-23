#include "main.h"

/**
 * print_line - prints a straight line using '_'
 * @n: the number of '_' to be printed
 * Return: empty
 */

void print_line(int n)
{
	int len;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (len = 0; len < n; len++)
		{
			_putchar(95);
		}

		_putchar('\n');
	}
}
