#include "main.h"
/**
 * print_square - A function that print square based on size
 * @size: the size of the square
 *
 * Return: result
 */
void print_square(int size)
{
	int i = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			_putchar('#');
			i++;

		}
	}
	_putchar('\n');
}
