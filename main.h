#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


int _putchar(char c);
int _strlen(char *s);
int _strlenc(const char *s);
int _printf(const char *format, ...);

int print_char(va_list args);
int print_string(va_list args);
int print_%(void);
int print_int(va_list args);
int print_deci(va_list args);
int print_octal(va_list args);
int print_unsigned_int(va_list args);
int print_binary(va_list args);
int print_pointer(va_list args);











#endif
