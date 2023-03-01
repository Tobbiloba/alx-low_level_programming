#include "main.h"
/**
 * _strcat - The name of the function
 * @dest: The first character
 * @src: The second character
 * Return: The combination of char 1 and char 2
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
		i++;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
