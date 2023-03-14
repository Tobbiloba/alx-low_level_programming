#include "main.h"
#include <stdlib.h>
/*
 * str_concat - The name of the funtion
 * @s1: The name of the first parameter
 * @s2: The name of the second parameter
 * Return: THe result
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, fullLength, j, i;
	char* ptr;

	if (s1 == NULL)
		return "";

	if (s2 == NULL)
		return "";
	
	len1 = 0;

	while (s1[len1] != '\0')
		len1++;

	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	fullLength = len1 + len2;

	ptr =  malloc(sizeof(char) * (fullLength + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < fullLength; i++)
		ptr[i] = s1[i];

	for (j = 0; j <= len2; i++, j++)
		ptr[len1 + j] = s2[j];

	return (ptr);
}
