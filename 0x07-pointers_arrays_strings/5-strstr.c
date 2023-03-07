#include "main.h"
/**
 * _strstr - The name of the function that searches for a sbustring
 * _strlen - A function to get length
 * @str: The str length
 * @haystack: The main string
 * @needle: The sub string
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

		if (j == m)
			return (needle);

	}
	return (0);
}
