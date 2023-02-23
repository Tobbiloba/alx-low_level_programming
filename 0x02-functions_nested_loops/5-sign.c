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
		_putchar(',');
		_putchar(' ');

		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		_putchar(',');
		_putchar(' ');
		_putchar ('/');
	}
	else
	{
		return (0);
		_putchar(',');
		_putchar(' ');
		return (0);
	}
	return (0);
}
