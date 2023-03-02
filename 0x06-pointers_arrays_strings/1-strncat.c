#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 *
 * @src: value to enter
 * @dest: value to enter
 * @n: value to enter
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[a] = src[b];
	a++;
	b++;
	}
	dest[a] = '\0';
	return (dest);
}
