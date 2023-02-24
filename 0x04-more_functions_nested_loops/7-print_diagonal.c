#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 *
 * @n: char to be used
 * Return: void
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c, d;

		for (c = 0; c < n; i++)
		{
			for (d = 0; d < n; d++)
			{
				if (d == c)
					_putchar('\\');
				else if (d < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
