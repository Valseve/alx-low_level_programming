#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *
 * @str: input
 * Return: void
 */
void puts_half(char *str)
{
	int a, n, o;

	o = 0;

	for (a = 0; str[a] != '\0'; a++)
		o++;

	n = (o / 2);

	if ((o % 2) == 1)
		n = ((o + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
