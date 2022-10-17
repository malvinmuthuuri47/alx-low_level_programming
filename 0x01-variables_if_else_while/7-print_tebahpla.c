#include <stdio.h>

/**
 * main - Entry point for the program
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);

	putchar('\n');

	return (0);
}
