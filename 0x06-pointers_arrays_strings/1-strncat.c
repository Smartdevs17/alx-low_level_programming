#include "main.h"

/**
 * _strncat - Concatenates two strings
 *
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: The length of int
 *
 * Return: Pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, i;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
