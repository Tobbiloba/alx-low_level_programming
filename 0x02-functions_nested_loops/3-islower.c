#include "main.h"

/**
 * _islower - A function that check if true or false
 * @c: Function that does this
 *
 * Return: always(0)
 */
int _islower(int c)
{
	if (c > 96 && c < 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
