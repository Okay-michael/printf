#include "main.h"

/**
 * bin_handler - converts and prints an integer value into a binary
 * @params: this is gotten from the variadic arguments set
 * Return: the number of characters printed
 */
int bin_handler(va_list params)
{
	int binary[32];
	int i = 0, ctr = 0;
	unsigned int val;

	val = va_arg(params, int);
	if (val == 0)
	{
		_putchar('0');
		return (1);
	}

	while (val)
	{
		binary[i] = val % 2;
		val /= 2;
		ctr++;
		i++;
	}

	while (i > 0)
	{
		_putchar(binary[i] + '0');
		--i;
	}

	return (ctr);
}

