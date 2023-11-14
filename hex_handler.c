#include "main.h"

#define MAX_HEX_CHARS 32

/**
 * hex_handler - handles the 'x' format specifier.
 * @params: the variable argument list.
 * Return: The number of characters printed.
 */
int hex_handler(va_list params)
{
	unsigned int value = va_arg(params, unsigned int);
	int char_count = 0;
	char hex[MAX_HEX_CHARS];

	if (value == 0)
	{
		_putchar('0');
		char_count++;
		return (char_count);
	}

	while (value > 0)
	{
		int remainder = value % 16;

		if (remainder < 10)
			hex[char_count++] = remainder + '0';
		else
			hex[char_count++] = remainder - 10 + 'a';
		value /= 16;
	}

	while (--char_count >= 0)
	{
		_putchar(hex[char_count]);
	}

	return (char_count + 1);
}
