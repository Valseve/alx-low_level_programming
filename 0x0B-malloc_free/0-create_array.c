#include "main.h"
#include <stdlib.h>

/**
 * *create_array -  function that creates an array of chars,
 * and initializes it with a specific char
 *
 * @size: number of bytes
 * @c: char
 * Return: char
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	while (size--)
	{
		array[size] = c;
	}
	return (array);
}
