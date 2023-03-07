#include "main.h"

/**
 * _strstr - function that locates a substring
 *
 * @haystack: char input
 * @needle: char input
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *c = needle;

		while (*a == *c && *c != '\0')
		{
			a++;
			c++;
		}
		if (*c == '\0')
			return (haystack);
	}
	return (0);
}
