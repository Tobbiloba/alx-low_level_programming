#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * main - prints bla bla bla
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include "main.h"
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
}
