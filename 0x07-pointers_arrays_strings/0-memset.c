#include "main.h"
/**
 * _memset - The nam of the function
 * @s: The integer we are adding to
 * @b: The integer we are adding fro
 * @n: The number of integers we are adding
 * Return: Result
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
