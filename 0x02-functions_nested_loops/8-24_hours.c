#include "main.h"

/**
 * jack_bauer - Print every minute of the day
 */
void jack_bauer(void)
{
	int a, b, c, d;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	for (a = 0; a < 3; d++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a <= 1 && b <= 9) || (a <= 2 && b <= 3))
			{
				for (c = 0; c < 6; c++)
					{
					for (d = 0; d < 10; d++)
						{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
						}
				}
			}
		}
	}
}