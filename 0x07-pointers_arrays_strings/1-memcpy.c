#include "main.h"
/**
 * _memcpy - The name of the functio that copy char fro src to dest nth time
 * @dest: The destination
 * @src: The source
 * @n: The amount of times
 * Return: Result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
