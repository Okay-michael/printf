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
<<<<<<< HEAD
int unsigned_handler(va_list params);
=======
int r_handler(va_list params);
>>>>>>> 0a30fea27fff5203b1c62591ae826c4b20b5e0a9
#endif
