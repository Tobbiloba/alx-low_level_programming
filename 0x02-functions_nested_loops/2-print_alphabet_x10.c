#include "main.h"

/**
 * main - Function
 * Return: bla bla bla
 */
void print_alphabet_x10(void);
{
	int i = 0;

	while (i < 10)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
	}
	_putchar('\n');
}
