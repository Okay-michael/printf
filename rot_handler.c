#include "main.h"
/**
 * rot_handler - prints rot function
 * @params: value
 * Return: always 0
 */
int rot_handler(va_list params)
{
	char c;
	const char *input = va_arg(params, const char *);
	int printed = 0;

	c = *input;
	if (input == NULL)
	{
		return (0);
	}
	while (*input != '\0')
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			{
				_putchar(c + 13);
			}
			else
			{
				_putchar(c - 13);
			}
		}
		else
		{
			_putchar(c);
		}
		printed++;
		input++;
	}
	return (printed);
}
