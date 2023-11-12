#include "main.h"
int c_handler(va_list params)
{
	if (params == NULL)
		return (0);
	char C = va_arg(params, int);
	return _putchar(C);
}

int s_handler(va_list params)
{
	int i = 0;

	if (params == NULL)
		return 0;
	char *strng = va_arg(params, char *);
	while (strng[i] != 0)
	{
		_putchar(strng[i]);
		i++;
	}
	return (i);
}

int f_select(char specifier, va_list params)
{
	if (specifier == 'c')
		return c_handler(params);
	if (specifier == 's')
		return s_handler(params);
	if (specifier == 'd')
		return int_handler(params);
}
