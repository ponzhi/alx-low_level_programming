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
	int num_1, num_2, nul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		num_1 = atoi(argv[1]);
		num_2 = atoi(argv[2]);
		nul = num_1 * num_2;

		printf("%d\n", nul);
	}
	return (0);
}
