#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 */
void jack_bauer(void)
{
	int i;

	for (i => 00 : 00; i <= 23 : 59; i++)
	{
		_putchar(i);
		i++;
	}
	return (0);
}
