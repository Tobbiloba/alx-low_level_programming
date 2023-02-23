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
	if ((c > 64 && c < 9) || (c > 96 && c < 123))
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
