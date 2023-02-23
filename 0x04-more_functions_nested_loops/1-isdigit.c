#include "main.h"
/**
 * _isdigit - Check if the input is a number
 * @c: a char
 * Return: Always(0);
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
