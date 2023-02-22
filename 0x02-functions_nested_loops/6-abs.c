#include "main.h"

/**
 * _abs - Entry point
 *
 * @i: The integer to check
 * Return: the absolute value of int
 */
int _abs(int i)
{
	if (i < 0)
	{
		int j;

		j = i * -1;
		return (j);
	}
	return (i);
}
