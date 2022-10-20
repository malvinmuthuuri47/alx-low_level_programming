#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: the number
 * Return: Value of the last digit
 */

int print_last_digit(int n)
{
	#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: number
 * Return: value of the last digit of the the integer
 */

int print_last_digit(int i)
{
	int l_digit = i % 10;

	if (l_digit < 0)
		l_digit *= -1;

	_putchar(l_digit + '0');
	return (0);
}
}
