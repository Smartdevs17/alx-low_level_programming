#include "main.h"
/**
 * _strlen - return the length of a string
 * written by JOSEPH SEGUN
 * @s: char to check
 * Description: this will return the length of a string
 * Return: nothing
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
