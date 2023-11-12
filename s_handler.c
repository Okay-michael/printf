#include "main.h"

/**
 * s_handler - this function prints the string fetched from the
 * variable argument set
 * @params: this is a string pointed to by the variadic argument
 * Return: the number of characters printed
 */
int s_handler(va_list params)
{
	int i = 0;
	char *strng;

	if (params == NULL)
		return (0);

	strng = va_arg(params, char *);
	while (strng[i] != 0)
	{
		_putchar(strng[i]);
		i++;
	}

	return (i);
}
