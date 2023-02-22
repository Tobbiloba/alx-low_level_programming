#include "main.h"

/**
 * _islower - A function that check if true or false
 * c - is a character
 * main - Function that does this
 *
 * Return: always(0)
 */
int _islower(int c)
{
	if (c > 96 && c < 127)
	{
		_putchar('1');
	}
	else
	{
		_putchar('0');
	}
	return (0);
}
