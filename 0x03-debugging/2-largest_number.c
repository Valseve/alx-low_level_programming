#include "main.h"
/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/
int largest_number(int a, int b, int c)
{
	int i;

	if (a > b && a > c)
	{
		i = a;
	}
	else if (a > b && c > a)
	{
		i = c;
	}
	else if (b > c)
	{
		i = b;
	}
	else
	{
		i = c;
	}
	return (i);
}

