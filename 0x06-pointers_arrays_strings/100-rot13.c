#include "main.h"
#include <stdio.h>

/**
 * rot13 - function that encodes a string using rot13
 *
 * @c: character
 * Return: char
 */

char *rot13(char *c)
{
	int a;
	int b;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (c[a] == data1[b])
			{
				c[a] = datarot[b];
				break;
			}
		}
	}
	return (c);
}
