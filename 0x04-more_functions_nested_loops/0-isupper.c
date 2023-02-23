#include "main.h"
/**
 * _isupper - A function to check if is upper
 * @c: a char
 *
 * Return: answer(0)
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
