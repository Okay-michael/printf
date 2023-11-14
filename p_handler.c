#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * p_handler - handles the %p specifier to print pointers
 * @params: pointer to a pointer variable
 * Return: number of characters printed
 */
int p_handler(va_list params)
{
	void *ptr = va_arg(params, void *);
	unsigned long address = (unsigned long)ptr;
	unsigned long base = 16;
	char buffer[50], temp;
	int remainder, i, j, count = 0;

	if (ptr == NULL)
		return (_printf("(nil)"));

	buffer[count++] = '0';
	buffer[count++] = 'x';

	if (address == 0)
	{
		buffer[count++] = '0';
	}
	else
	{
		while (address != 0)
		{
			remainder = address % base;
			if (remainder < 10)
				buffer[count++] = remainder + '0';
			else
				buffer[count++] = remainder - 10 + 'a';
			address = address / base;
		}
		for (i = 2, j = count - 1; i < j; i++, j--)
		{
			temp = buffer[i];
			buffer[i] = buffer[j];
			buffer[j] = temp;
		}
	}
	for (i = 0; i < count; i++)
		_putchar(buffer[i]);
	return (count);
}
