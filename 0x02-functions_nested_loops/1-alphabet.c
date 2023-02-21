#include <stdio.h>
/**
 * main - prints from a to z
 *
 * Return: result
 */
#include "main.h"1
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
