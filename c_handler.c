#include "main.h"

/**
 * c_handler - handles the character pointed to by the variable
 * fetched from the variadic argument set
 * @params: the character variable
 * Return: returns (1) on success
 */
int c_handler(va_list params)
{
	char c;

	if (params == NULL)
		return (0);

	c = va_arg(params, int);
	return (_putchar(c));
}
