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

	i = 0;
	a = 1;
	while
		(i < 10)
		{
			putchar(i + '0');
			i++;
			while (a < 10)
			{
				if (i > a)
				{
					putchar(a + '0');
					a++;
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}
