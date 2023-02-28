#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: string to be cersed
 * Return: void
 */
void rev_string(char *s)
{
	char c = s[0];
	int a = 0;
	int i;

	while (s[a] != '\0')
	a++;
	for (i = 0; i < a; i++)
	{
		a--;
		c = s[i];
		s[i] = s[a];
		s[a] = c;
	}
}

