#include "holberton.h"

/**
 * _strlen - string length... I had Ramen for dinner
 * @s: SsSsssSssSSSss
 * Return: count...ing the hours I invest into progress
 */

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count))
	{
		count++;
	}
	return (count);
}

/**
 * printf_str - Print the string
 * @arg: argument
 */

int printf_str(va_list arg)
{
	char *s = va_arg(arg, char *);
	int i, length;

	length = _strlen(s);
	for (i = 0; i < length; i++)
		_putchar(s[i]);

	return (0);
}
