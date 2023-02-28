#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * followed by a new line
 *
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int a;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	s--;
	for (a = i; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
