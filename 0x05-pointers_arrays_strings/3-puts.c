#include "main.h"
/**
 * _puts - The function that prints out a string
 * @str: is the string
 * Return: a string
 */
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
