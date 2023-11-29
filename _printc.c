#include "main.h"
#include <unistd.h>
/**
 * _printc - print char
 * @a: leng
 * @b: char
 * Return: a
 */
int _printc(unsigned int a, char b)
{
	if (!b && b !='\0')
	{
		write(1, "(", 1);
		write(1, "n", 1);
		write(1, "u", 1);
		write(1, "l", 1);
		write(1, "l", 1);
		write(1, ")", 1);
	a = a + 6;
	}
	else
	{
		write(1, &b, 1);
		a++;
	}
	return (a);
}
