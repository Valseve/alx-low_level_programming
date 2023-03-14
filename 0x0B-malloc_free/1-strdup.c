#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: string
 * Return: char, NULL (ERROR)
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	copy = malloc(sizeof(char) * (len + 1));

	if (copy == NULL)
	{
		return (NULL);
	}
	while ((copy[i] = str[i]) != '\0')
	{
		i++;
	}
	return (copy);
}
