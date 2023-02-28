#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 *
 * @str: input
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;
	int a = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	a = i - 1;
	for (o = 0 ; o <= a ; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
