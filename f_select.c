#include "main.h"

/**
 * f_select - this function is responsible for selecting the
 * appropriate function depending on the specifier found after '%'
 * @specifier: this represents the specifier found
 * @params: this is the variadic variable fetched when va_arg is called
 * on the variadic variables set
 * Return: the number of character printed after the right function is
 * called.
 */
int f_select(char specifier, va_list params)
{
	if (specifier == 'c')
		return (c_handler(params));
	if (specifier == 's')
		return (s_handler(params));
	if (specifier == 'd' || specifier == 'i')
		return (int_handler(params));
	if (specifier == 'b')
		return (binary_handler(params));
	if (specifier == 'u')
		return (unsigned_handler(params));
	if (specifier == 'r')
		return (r_handler(params));
	return (0);
}
