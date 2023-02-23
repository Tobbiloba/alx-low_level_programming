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
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
