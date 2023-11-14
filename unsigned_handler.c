#include "main.h"
#include <limits.h>

/**
 * unsigned_handler - handles the 'u' format specifier.
 * @params: The variable argument list.
 * Return: no of xters printed.
 */
int unsigned_handler(va_list params)
{
	unsigned int un_int = va_arg(params, unsigned int);
	int ctr = 0;

	if (un_int == 0)
	{
		_putchar('0');
		ctr++;
		return (ctr);
	}

	while (un_int != 0)
	{
		_putchar((un_int % 10) + '0');
		ctr += 1;
		un_int /= 10;
	}

	return (ctr);
}
