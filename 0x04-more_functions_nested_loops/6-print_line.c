#include "main.h"
/**
 * print_line - It prints an underscore n times
 * @n: is the amount ot line you want to be printed
 *
 * Return: result
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
