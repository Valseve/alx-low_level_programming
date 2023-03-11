#include "main.h"
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it
 *
 * @argc: Argument number
 * @argv: Arguments array
 * Return: int
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
