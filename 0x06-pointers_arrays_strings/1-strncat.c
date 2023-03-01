#include "main.h"

/**
 * _strncat - Joins two strings together n time
 * @dest: First string
 * @src: Second string
 * @n: number of times
 * Return: The result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
