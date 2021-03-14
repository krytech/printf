#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h> // variadic functions
#include <unistd.h> // system, read, write


/**
 * struct format - struct for printf format
 */
typedef struct format
{
	char *f;


}


/* helpers */
int _putchar(char c);


/* main functions */
int printf_c();
int printf_str();
int printf_int();
int printf_bin();
int prtinf_unsign_int();
int printf_oct();
int printf_hex();
int printf_HEX();
int printf_ptr();
int printf_special_string();
int printf_str_rev();
int printf_rot();

#endif
