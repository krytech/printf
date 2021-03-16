#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> /* variadic functions */
#include <unistd.h> /* system, read, write */

/**
 * struct format - struct for printf format
 */

typedef struct format
{
	/* holds char pointers and function pointers */
	char *c;
	int (*f)(va_list);
} format_t;


/* helpers */
int _putchar(char c);
int _strlen(char *s);
int _strcpy(char *dest, char *src);
int _strncpy(char *dest, char *src, int n);
/* add print_num */

/* main functions */
int _printf(const char *format, ...);
int printf_c(va_list);
int printf_percent(va_list);
int printf_str(va_list);
int printf_int(va_list);
int printf_bin(va_list);
int printf_unsign_int(va_list);
int printf_oct(va_list);
int printf_hex(va_list);
int printf_HEXU(va_list);
int printf_ptr(va_list);
int printf_special_string(va_list);
int printf_str_rev();
int printf_rot(va_list);

#endif
