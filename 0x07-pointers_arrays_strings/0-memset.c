#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte
 *
 * @s: character value
 * @b: character value
 * @n: number of bytes to be changed
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
