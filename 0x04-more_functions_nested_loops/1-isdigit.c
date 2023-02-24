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
		return (1);
	}
	else
	{
		return (0);
	}
}