#include "main.h"

/**
 *_islower -> checks if the character is lowercase
 *@c: is the int that will use for the argument of the function 
 *Return: return 1 and 0 depending on condition
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
