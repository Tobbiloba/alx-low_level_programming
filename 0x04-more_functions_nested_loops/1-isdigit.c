#include <stdio.h>
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
		printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
	return (0);
}
