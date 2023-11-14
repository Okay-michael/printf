#include "main.h"

/**
 * r_handler - this function prints the string fetched from the
 * variable argument set in reverse order
 * @params: this is a string pointed to by the variadic argument
 * Return: the number of characters printed
 */
int r_handler(va_list params)
{
	int r;
	int i = 0;
	char *strng;

	if (params == NULL)
		return (0);

	strng = va_arg(params, char *);
	if (!strng)
		strng = "(null)";
	while (strng[i] != 0)
	{
		i++;
	}
	for (r = i; r < i; r--)
	{
		_putchar(strng[r]);
	}

	return (i);
}
