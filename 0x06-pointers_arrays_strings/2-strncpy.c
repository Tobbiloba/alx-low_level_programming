#include "main.h"
/**
 * _strncpy - Copies one string into another
 * @dest: the first string
 * @src: the second string
 * @n: the numbr of times
 * Return: result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
