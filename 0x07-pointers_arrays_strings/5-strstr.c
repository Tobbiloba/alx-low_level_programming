#include "main.h"
/**
 * _strstr - The name of the function that searches for a sbustring
 * len - A function to get length
 * @str: The str length
 * @haystack: The main string
 * @needle: The sub string
 * Return: The substring
 */
int len (char *str)
{
	int num = 0;

	while (str[num] != '\0')
		num++;

	return num;
}

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int n = len(haystack);
	int m = len(needle);

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

