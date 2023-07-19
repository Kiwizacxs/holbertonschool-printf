#include "main.h"

void
print_char(va_list g, int n)
{
	_putchar(va_arg(g, int));
	n++;
}

void
print_string(va_list g, int n)
{
	int i = 0;
	char *str = va_arg(g, char *);

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		n++;
		i++;
	}
}

