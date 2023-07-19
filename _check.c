#include "main.h"

int
check_char(char s, va_list g)
{
	char *options = "discp";
	int num;
	int c = 0;

	if (s == options[3])
	{
		print_char(g);
		return (1);
	}
	else if (s == '%')
	{
		_putchar(s);
		return (1);
	}
	else if (s == options[2])
	{
		return (print_string(g, c));
	}
	else if (s == options[0] || s == options[1])
	{
		num = va_arg(g, int);
		return (print_numbers(num, c));
	}
	else
	{
		_putchar('%'), _putchar(s);
		return (2);
	}
}
