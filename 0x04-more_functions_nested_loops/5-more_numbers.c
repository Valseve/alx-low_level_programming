#include "main.h"

/**
 * more_numbers -  function that prints 10 times the numbers
 *  from 0 to 14, followed by a new line.
 *
 *  Return: void
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 14; i++ )
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
