#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}
