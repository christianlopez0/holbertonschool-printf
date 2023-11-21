#include "main.h"
#include <stdarg.h>
/**
 *_printf - funcion parecida a printf
 *
 */

int _printf(const char *format, ...)
{
	va_list list;
	va_start (list, format);
	while(*format != '\0')
	{
		char c;
		const char *str;
		int count = 0;

		if (*format == '%' && *(format + 1 != '\0'))
		{
			format++; //* pasa al siguiente char*/
			switch (*format)
			{
				case 'c':
					{

					}
				case 's':
					{
					}
				case '%':
					{
					}
				case 'd':
				case 'i':
					{
					}
				default:
					putchar('%');
					putchar(*format);
					break;
			}
		}
		else
		{
			putchar(*format);
		}
		format++;
	}
	va_end(list);
}
