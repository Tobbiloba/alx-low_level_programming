#include "main.h"
#include <string.h>
/**
 * _strlen - The name of the function
 * @s: The string
 * Return: result
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
