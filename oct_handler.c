#include "main.h"

/*oct_handler - converts and prints an unsigned int into octal numbers
 * @params: the variadic argument gotten
 * Return: the number of characters printed
 */
int oct_handler(va_list params)
{
	char octal[12];
	int j, i = 0, ctr = 0, oct_num;

	oct_num = va_arg(params, unsigned int);
	if (oct_num == 0)
	{
		_putchar('0');
		ctr++;
		return (ctr);
	}

	while (oct_num > 0)
	{
		octal[i++] = (oct_num % 8) + '0';
		oct_num /= 8;
		ctr++;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(octal[j]);
	}

	return (ctr);
}
