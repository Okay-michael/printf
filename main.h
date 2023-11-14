#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
int _putchar(char Char);
int _printf(const char *format, ...);
int c_handler(va_list params);
int s_handler(va_list params);
int int_handler(va_list params);
int binary_handler(va_list params);
int f_select(char specifier, va_list params);
int print_int(long nbr, int cntr);
int int_handler(va_list lst);
int unsigned_handler(va_list params);
int r_handler(va_list params);
int oct_handler(va_list params);
int rot_handler(va_list params);
int hex_handler(va_list params);
int HEX_handler(va_list params);
#endif
