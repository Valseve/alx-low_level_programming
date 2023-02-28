#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int o = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for ( ; o < a ; o++)
	{
		dest[o] = src[o];
	}
	dest[a] = '\0';
	return (dest);
}
