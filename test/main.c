#include "main.h"
#include <stdio.h>
int main(void)
{
	int len;
	char c = '$';
	char *s = "HEY";
	int num = 5;
	_printf("hello,%c#%s num - %d", c, s, num);
	len = _printf("hey%cand%s", c, s);
	printf("%d\n", len);
	return (0);
}
