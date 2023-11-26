#include "main.h"
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *_printf - is a basic copy of the funcion printf
 *@format: is a string contains the format to print
 *Return: Return the number of character that prints
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		while (format[i] != '%' && format[i + 1] != '\0')
			count += write(1, &format[i++], 1);
		if (format[i] == '%')
		{
			while (format[++i] == ' ')
				;
			if (format[i] == '%')
				count += write(1, "%", 1);
			else
			{
				if (printf_funcions(format[i]) == NULL)
				{
					count += write(1, "%", 1);
					count += write(1, &format[i], 1);
				}
				else
				{
					count += (printf_funcions(format[i]))(list);
				}
			}
			i++;
		}
		if (format[i] != '%' && format[i] != '\0')
		{
			count += write(1, &format[i++], 1);
		}
	}
	va_end(list);
	return (count);
}
