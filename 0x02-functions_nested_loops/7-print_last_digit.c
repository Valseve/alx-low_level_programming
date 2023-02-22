#include "main.h"

/**
 * print_last_digit - Print last digit of a number
 *
 * @i: integer to be checked
 * Return: Last digit
 */
int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (i <= 0 && i > 0)
	{
		_putchar(j);
	}
	return (j);
}
