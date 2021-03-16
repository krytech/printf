#include "holberton.h"

int print_c(va_list val)
{
	char c;

	c = va_arg(val, int);

	_putchar(c);

	return (0);
}
