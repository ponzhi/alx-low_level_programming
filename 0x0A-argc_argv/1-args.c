#include <stdio.h>

/**
 * main - print the name of the program
 * @args: this is the argument count
 * @argv: this is the argument vector
 *
 * Return: Always 0 (success)
 */

int main(int args, char *argv[])
{
	printf("%d\n", args - 1);
	(void)argv;
	return (0);
}
