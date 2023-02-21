#include "main.h"

/**
 *void print_alphabet_x10(void) - Entry point
 *
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	char c;
	int  i;

	c = 'a';
	i = 0;
	while
		(i < 10)
		{
			while
			(c <= 'z')
			{
				_putchar(c);
				c++;
			}
			_putchar('\n');
			i++;
		}
}
