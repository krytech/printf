#include "holberton.h"

/**
 * _strncpy - concatenates two strings
 * @src: first string to copy from
 * @dest: second string to add to
 * @n: value to add to dest
 * Return: dest value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
