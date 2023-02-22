#include "main.h"
/**
 * print_alphabet - A function that prints a to z
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriate
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
