#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers
 *
 * @a: int parameter
 * @b: int parameter
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
