#include "main.h"
/**
 * more_numbers - Pritns 0 to 14 10 times
 *
 * Return: result
 */
void more_numbers(void)
{
	int count = 0;
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i + '0');
		}

		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
