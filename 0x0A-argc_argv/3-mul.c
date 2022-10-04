#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of two number
 * @argc: the number of argument supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: Alway 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}

	printf("Error\n");
	return (1);
}
