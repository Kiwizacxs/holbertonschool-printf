#include "main.h"

void
check_char(char s, va_list g, int n)
{
	char *options = "discp";
	int num;

	if (s == options[3])
	{
		print_char(g, n);
	}
	else if (s == '%')
	{
		_putchar(s);
		n++;
	}
	else if (s == options[2])
	{
		print_string(g, n);
	}
	else if (s == options[0] || s == options[1])
	{
		num = va_arg(g, int);
		print_numbers(num, n);
	}
	else
	{
		_putchar('%'), _putchar(s);
	}
}
