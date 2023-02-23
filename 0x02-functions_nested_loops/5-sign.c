#include "main.h"
/**
 * print_sign - A function that chack it a number is greater then 0 or less
 * @n: an integer
 *
 * Return: A result
 * -1 if negetive
 *  and 0 if zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar ('/');
		return (1);
	}
	else
	{
		return (0);
		_putchar('0');
	}
	_putchar('\n');
	return (0);
}
