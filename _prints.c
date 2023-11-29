#include "main.h"
#include <unistd.h>
/**
* _prints - print char
* @a: leng
* @s: char
* Return: a
*/
int _prints(unsigned int a, char *s)
{
	int i = 0;

	if (!s)
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
		while (*(s + i) != '\0')
		{
			write(1, (s + i), 1);
			i++;
			a++;
		}}
	return (a);
}
