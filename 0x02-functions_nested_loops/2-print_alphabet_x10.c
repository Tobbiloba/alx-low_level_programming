#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * main - prints bla bla bla
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
#include "main.h"
void print_alphabet_x10(void)
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
