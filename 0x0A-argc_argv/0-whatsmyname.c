#include "main.h"
#include <stdio.h>

/**
 * main -  program that prints its name, followed by a new line
 *
 * @argc: argument count
 * @argv: array
 * Return: int
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
