#include <stdio.h>
/**
 * main - prints from a to z
 *
 * Return: result
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
