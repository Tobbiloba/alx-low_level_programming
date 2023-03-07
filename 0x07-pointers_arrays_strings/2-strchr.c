#include "main.h"
/**
 * _strchr - returns the address of where the char is found in the string
 * @s: The name of the string
 * @c: The name of the char
 * Return: Result
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
