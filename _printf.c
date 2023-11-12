#include "main.h"
/**
 * _printf - prints variable number of args
 * @format: argumet
 * Return: always 0;
 */
int _printf(const char *format, ...)
{
	int i, j, pctr;
	va_list params;
	char *handled_cases = "cdisbuoxX";

	va_start(params, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				pctr += _putchar('%');
			}
			else
			{
				for (j = 0; handled_cases[j]; j++)
					if (format[i] == handled_cases[j])
					{
						pctr += f_select(format[i], params);
						break;
					}
				if (!handled_cases[j])
				{
					pctr += _putchar('%');
					pctr += _putchar(format[i]);
				}
			}
		}
		else
		{
			pctr += _putchar(format[i]);
		}
	}
	va_end(params);
	return (pctr);
}
