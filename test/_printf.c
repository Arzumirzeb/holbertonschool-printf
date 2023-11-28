#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
void tostr(int num)
{
<<<<<<< HEAD
	int i, rem, len = 0, n;
=======
	int i, rem, len = 0;
	unsigned int n;
>>>>>>> f7c4b75bd666e6e90dde25b081608d5eeab9465a
	char s[11];

	if (num < 0)
	{
		write(1, "-", 1);
		n = -1 * num;
<<<<<<< HEAD
=======
		num = -1 * num;
>>>>>>> f7c4b75bd666e6e90dde25b081608d5eeab9465a
	}
	else
		n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		s[i] = rem + '0';
	}
	s[len] = '\0';
	for (i = len - 1; i >= 0; i--)
<<<<<<< HEAD
		write(1, s + len, 1);
=======
		write(1, s + i, 1);
>>>>>>> f7c4b75bd666e6e90dde25b081608d5eeab9465a
}
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
		if (format[i] == '%' && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		{
			int nr = va_arg(ptr, int);
			tostr(nr);
			count = count + 1;
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
		exit(31);
	return (count);
}
