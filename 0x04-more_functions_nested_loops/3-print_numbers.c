#include "main.h"

/**
 * print_numbers - print the number since 0 up to 9
 *
 * Return: the numbers since 0 up to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
