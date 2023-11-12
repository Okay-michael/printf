#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
int _putchar(char Char);
int _printf(const char *format, ...);
int c_handler(va_list params);
int s_handler(va_list params);
int int_handler(va_list params);
int f_select(char specifier, va_list params);
#endif



