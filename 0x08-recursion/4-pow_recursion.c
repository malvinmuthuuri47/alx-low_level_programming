#include "main.h"

/**
 * _pow_recursion - pow function
 *
 * @x: Base number
 *
 * @y: Power number
 *
 * Return: int(x raised to the power of y)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (1);
	}
}
