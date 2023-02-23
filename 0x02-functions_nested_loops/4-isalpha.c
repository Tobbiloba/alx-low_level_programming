#include "main.h"

/**
 * _isalpha - it is a function that prints somehing
 * @c: it is an integer
 * main - a function that does something
 *
 * Return: always(0)
 */

int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
