#include "main.h"
/**
 * print_alphabets_10X
 *
 * Return: bla bla bla
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		for (char c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
