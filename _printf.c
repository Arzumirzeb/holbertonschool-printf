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
	int i, count = 0, len = 0;
	char fc;
	char *fs;
	va_list ptr;

	va_start(ptr, format);
	for (i = 0; format != NULL && format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			fc = va_arg(ptr, int);
			write(1, &fc, 1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			fs = va_arg(ptr, char *);
			if (fs == NULL)
				fs = "(null)";
			for (len = 0; fs[len] != '\0'; len++)
				continue;
			write(1, fs, len);
			count = count + len - 1;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%", 1);
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '\0')
			continue;
		else
			write(1, &format[i], 1);
		count++;
	}
	va_end(ptr);
	if (count == 0)
		exit(50);
	return (count);
}
