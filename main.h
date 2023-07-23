#ifndef P
#define P
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>

int _putchar(char c);
int _printf(const char *format, ...);
int check_char(char s, va_list g);
void print_char(va_list g);
int print_string(va_list g, int n);
int print_numbers(int num, int n);

#endif
