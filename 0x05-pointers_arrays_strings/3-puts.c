#include "main.h"

/**
 * _puts -> this is a function that puts
 * @str: a parameter to _puts function
 */
void _puts(char *str)
{
	for (; *str ! = '\n'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
