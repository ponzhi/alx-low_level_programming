#include "main.h"

/**
 * rev_string -> reversing a string
 * @s: parameter s
 */

void rev_string(char *s)
{
	char tmp;
	int i, length1, length2;

	length1 = 0;
	length2 = 0;

	while (s[length1] != '\0')
		length1++;

	lenght2 = length1 - 1;
	for (1 = 0; i <= lenght1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[lenght2];
		s[lenght2] = tmp;
		lenght2 -= 1;
	}
}
