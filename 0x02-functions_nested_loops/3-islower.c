#include "main.h"

/**
 * _islower - checks for lowercase character
 *
 * Return 1 if c is lowercase
 * Return 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
	{
		_putchar('1');
	}
	else 
	{
		_putchar('0');
	}
	return (0);
}
