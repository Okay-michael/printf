#include "main.h"
#define MAX_HEX_CHARS 64

/**
 * HEX_handler - handles the 'X' format specifier
 * (uppercase hexadecimal).
 * @params: the variable argument list.
 * Return: the number of characters printed.
 */
int HEX_handler(va_list params)
{
	unsigned int val = va_arg(params, unsigned int);
	int i, ctr = 0, remainder;
	char hex[MAX_HEX_CHARS];

	if (val == 0)
	{
		_putchar('0');
		return (1);
	}

	while (val)
	{
		remainder = val % 16;
		if (remainder < 10)
			hex[ctr++] = remainder + '0';
		else
			hex[ctr++] = (remainder - 10) + 'A';
		val /= 16;
	}
	for (i = ctr - 1; i >= 0; i--)
	{
		_putchar(hex[i]);
	}

	return (ctr);
}
