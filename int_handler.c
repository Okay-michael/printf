#include "main.h"
/**
 * int_handler - This function print int and a standered output
 * @lst: This is the variable part of the variadic function
 *
 * Return: This function returns an int value.
 */
int int_handler(va_list lst)
{
	int cntr;
	int fetch = va_arg(lst, int);

	cntr = print_int(fetch, 0);
	return (cntr);
}
