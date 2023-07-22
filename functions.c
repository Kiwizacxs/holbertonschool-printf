#include "main.h"

void
print_char(va_list g)
{
	_putchar(va_arg(g, int));
}

int
print_string(va_list g, int c)
{
	char *str = va_arg(g, char *);


	if (str == NULL)
		str = "(NULL)";
	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	return (c);
}

int
print_numbers(int num, int n)
{
	char strnum[12];
	int m = 1000000000;
	int len = 0;
	int digit;

	if (num < 0)
	{
		_putchar(45);
		n++;
		num = -num;
	}
	if (num == 0)
	{
		_putchar('0');
		n++;
	}
	else
	{
		while (len != 10)
		{
			digit = num / m;
			strnum[len] = digit + '0';
			len++;
			num = num % m;
			m = m / 10;
		}
		len = 0;
		while (strnum[len] == '0')
			len++;
		while (strnum[len] != '\0')
		{
			_putchar(strnum[len]);
			n++;
			len++;
		}
	}
	return (n);
}
