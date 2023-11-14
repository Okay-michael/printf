#include "main.h"

/**
 * bin_handler - converts a pass args to it's binary equiv and prints to stdin
 * @params: this is variable part of the function
 * Return: the number of characters printed.
 */
int bin_handler(va_list params)
{
	int binary[32];
	int i = 0, ctr = 0;
	unsigned int integer  = va_arg(params, int);

	if (integer == 0)
	{
		_putchar('0');
		return (1);
	}

	while (integer)
	{
		binary[i++] = params % 2;
		params /= 2;
		ctr++;
	}

	while (--i >= 0)
	{
		_putchar(bin[i] + '0');
	}

	return (ctr);
}
