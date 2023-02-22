#include "main.h"

/**
 * print_alphabet_x10 - A function that prints a to z 10 times
 * main - Function
 *
 * Return: bla bla bla
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
