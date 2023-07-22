#include "main.h"

int
_printf(const char *format, ...)
{
	int len = 0;
	int count = 0;
	va_list arg;

	if (format == NULL)
	{
		_putchar('\0');
		return (0);
	}
	va_start(arg, format);
	while (format[len] != '\0')
	{
		if (format[len] == '%' && format[len + 1] != '\0')
		{
			count = count + check_char(format[len + 1], arg);
			len++;
		}
		else if (format[len] == '%' && format[len + 1] == '\0')
		{
			return (-1);
		}
		else
		{

			_putchar(format[len]);
			count++;
		}
		len++;
	}
	va_end(arg);
	return (count);
}
