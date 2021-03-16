#include "holberton.h"

/**
 * printf_str - Print the string
 * @s: string
 * Return: String
 */

int printf_str(va_list str)
{
	char s;
	s = va_arg(val, str);

	while(*s)
	_putchar(*s);
	return (0);
}
