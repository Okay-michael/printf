#include "main.h"
<<<<<<< HEAD
/**
 * f_select - this function is responsible for selecting the
 * appropriate function depending on the specifier found after '%'
 * @specifier: this represents the specifier found
 * @params: this is the variadic variable fetched when va_arg is called
 * on the variadic variables set
 * Return: the number of character printed after the right function is
 * called.
 */
=======
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

>>>>>>> ab1a29ccaa4eb7004eb959caede4c96752d4486e
int f_select(char specifier, va_list params)
{
	if (specifier == 'c')
		return (c_handler(params));
	if (specifier == 's')
		return (s_handler(params));
	if (specifier == 'd' || specifier == 'i')
		return int_handler(params);
}
