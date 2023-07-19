#ifndef P
#define P
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
void check_char(char s, va_list g, int n);
void print_char(va_list g, int n);
void print_string(va_list g, int n);
void print_numbers(int num, int n);

#endif
