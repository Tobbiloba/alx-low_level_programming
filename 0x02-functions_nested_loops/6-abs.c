#include "main.h"
/**
 * _abs - A prototype
 * @r: An integer
 * main - This function prints a complete integer
 *
 * Return: Answer(0)
 */

int _abs(int r)
{
	if (r >= 0)
	{
		_putchar(r);
	}
	else
	{
		_putchar(-r);
	}
	_putchar('\n');
	return (0);
}
