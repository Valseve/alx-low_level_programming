#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: char to be printed
 * Return: void
 */
void print_line(int n)
{
	char c;

	if (n > 0)
	{
		for (c <= n; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		putchar('\n')
	}
}
