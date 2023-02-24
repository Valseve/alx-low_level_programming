#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit (0 through 9)
 *
 * @c: character to be checked
 * Return: 1 if c is a digit, o if otherwise
 */
int _isdigit(int c)
{
	if (c > 48 && c < 58)
	{
		_putchar(c':');
		_putchar(c' ');
		return (1);
	}
	else
	{
		_putchar(c':');
		_putchar(c' ');
		return (0);
	}
}
