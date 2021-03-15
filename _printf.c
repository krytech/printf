#include "holberton.h"

/**
 * find_function - matches the correct print function to use
 * @format: specific character
 * Return: function, -1 no match
 */

int (*find_function(char format))(va_list)
{
	int i;

	format_t array[] = {
		{"c", printf_c}, {"%", printf_percent}, {"s", printf_str}
		{"i", printf_int}, {"d", printf_int}, {"b", printf_bin}
		{"u", printf_unsign_int}, {"o", printf_oct}, {"x", printf_hex}
		{"X", printf_HEX}, {"p", prtinf_ptr},
		{"S", printf_special_string}, {"r", printf_str_rev},
		{"R", printf_rot}, {NULL, NULL}
	};

	for (i = 0; array[i].c != NULL; i++)
	{
		if (format == *array[i].c)
			return (array[i].f)
	}
	return (-1);
}

/**
 *
 */

int _printf(char *format, ...)
{
	char *s;
	int x;
	int count = 0;
	int (*func)(va_list);

	if (!format)
		return (-1);

	va_list arg;
	va_start(arg, format);

	for (x = 0; format[x] != '\0'; x++) // go through the string
	{
		if (format[x] == '%') // until you find a %
		{
			x++; // move to next character
			func = find_function(format[x]); // match function
			count += func(arg);
		}
		else
//nullbye
	}
	va_end(arg);
	return (count);
}
