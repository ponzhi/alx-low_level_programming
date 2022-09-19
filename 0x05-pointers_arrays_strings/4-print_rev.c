#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*(s + len));
	putchar(10);
}
