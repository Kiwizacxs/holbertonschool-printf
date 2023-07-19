#include "main.h"

int
_printf(const char *format, ...)
{
	int len = 0;
	int count = 0;
	va_list arg;

	va_start(arg, format);
	while (format[len] != '\0')
	{
		if (format[len] == '%')
		{
			check_char(format[len + 1], arg, count);
			len++;
		}
		else
		{

			_putchar(format[len]);
			count++;
		}
		len++;
	}
	_putchar('\n');
	va_end(arg);
	return (count);
}
