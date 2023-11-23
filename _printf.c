#include "main.h"
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
/**
 *_printf - funcion that is a copy of printf
 *@format: the string to print
 *Return: Return the number of characters printed
 */
int _printf(const char *format, ...)
{
	int count = 0, i = 0;
	va_list list;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format[i])
	{
		if (format[i] == '%')
		{
			while (format[++i] == ' ')
				;
			switch (format[i])
			{
				case 'c':
						count += print_char(va_arg(list, int));
						break;
				case 's':
						count += print_string(va_arg(list, char *));
						break;
				case '%':
						count += write(1, "%", 1);
						break;
				case 'i': case 'd':
						{}
				case '\0':
						va_end(list);
						return (-1);
				default:
						count += write(1, &format[--i], 1);
						count += write(1, &format[i + 1], 1);
						i++;
			}
		}
		else
		{
			count += write(1, &format[i], 1);
		}
		i++;
	}
	va_end(list);
	return (count);
}
