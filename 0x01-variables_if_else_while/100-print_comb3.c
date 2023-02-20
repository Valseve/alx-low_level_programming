#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int a;

	for (i = 0; i < 10; i++)
		{
		for (a = i + 1; a < 10; a++)
		{
			putchar(i);
			putchar(a);
			if (i == 8 && a == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
		}
	putchar('\n');
	return (0);
}
