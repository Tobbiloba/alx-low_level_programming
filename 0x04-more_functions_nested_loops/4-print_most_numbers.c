#include "main.h"
/**
 * print_most_numbers - Prints all number under 9 apart from 2 and 9
 *
 * Return: All numbers apart from 2 and 4
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i);
		}
	}
}
