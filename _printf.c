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
	int len = 0;
	unsigned int i, c = 0;
	char fc;
	char *fs;
	va_list ptr;

	va_start(ptr, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
			c = _printc(c, va_arg(ptr, nt)), i++;
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			c = _printd(c, va_arg(ptr, int)), i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			c = _prints(c, va_arg(ptr, char *)), i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
			write(1, "%", 1), i++, c++;
		else if (format[i] == '%' && format[i + 1] == '\0')
			continue;
		else
			write(1, &format[i], 1);
	}
	va_end(ptr);
	if (count == 0)
		exit(31);
	return (c);
}
