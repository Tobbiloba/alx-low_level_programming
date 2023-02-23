#include "main.h"
/**
 * more_numbers - Pritns 0 to 14 10 times
 * Return: result
 */
void more_numbers(void)
{
	int count = 0;
	int i;

	while (count < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar(i);
		}

		_putchar('\n');
		count++;
	}
}
