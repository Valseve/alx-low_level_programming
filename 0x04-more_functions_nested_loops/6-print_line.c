#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 *
 * @n: char to be printed
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int c;

		for (c = 1; c <= n ; c++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
