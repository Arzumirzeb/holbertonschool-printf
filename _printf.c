#include "main.h"
#include <stdarg.h>
#include <unistd.h>
/**
 * _printf - print
 * @format: str
 * Return: char
 */
int _printf(const char *format, ...)
{
	int i;
	int count = 0;
	int len = 0;
	char fc;
	char *fs;
	va_list ptr;

	va_start(ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			fc = va_arg(ptr, int);
			write(1, &fc, 1);
			count++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			fs = va_arg(ptr, char *);
			while (fs[len] != '\0')
			{
				len++;
			}
			write(1, fs, len);
			count = count + len;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%", 1);
			count++;
			i++;
		}
		else
		{
			write(1, &format[i], 1);
			count++;
		}
	}
	return (count);
}
