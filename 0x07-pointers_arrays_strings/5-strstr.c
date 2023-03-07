#include "main.h"
/**
 * _strlen - A function to get length
 * @_strstr - The name of the main function
 * @s: The name of the string assigned to counter
 * Return: The substring
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

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int beginning = 0;
	int n = _strlen(haystack);
	int m = _strlen(needle);

	for (i = 0; i <= n - m; i++)
	{
		k = i;
		j = 0;

		while (j < m && haystack[k] == needle[j])
		{
			k++;
			j++;
		}
		if (haystack[k] != needle[j])
			beginning++;

		if (j == m)
			return (&haystack[beginning - 1]);

	}
	return ('\0');
}
