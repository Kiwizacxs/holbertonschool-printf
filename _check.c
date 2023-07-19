#include "main.h"

void
check_char(char s, va_list g, int n)
{
	char *options = "discp";

	if (s == options[3])
	{
		print_char(g, n);
	}
	if (s == '%')
	{
		_putchar(s);
		n++;
	}
	if (s == options[2])
	{
		print_string(g, n);
	}
	else
	{
		_putchar('%');
		_putchar(s);
	}
}
