#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - print
 * @format: str
 * Return: char
 */
int _printf(const char *format, ...)
{
	unsigned int i, c = 0;
	va_list ptr;

	va_start(ptr, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			c = (unsigned int)_printc(&c, va_arg(ptr, int)), i++;
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			c = (unsigned int)_printd(&c, va_arg(ptr, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			c = (unsigned int)_prints(&c, va_arg(ptr, char *));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
			write(1, "%", 1), i++, c++;
		else if (format[i] == '%' && format[i + 1] == '\0')
			continue;
		else
			write(1, &format[i], 1), c++;
	}
	va_end(ptr);
	if (c == 0)
		exit(31);
	return (c);
}
