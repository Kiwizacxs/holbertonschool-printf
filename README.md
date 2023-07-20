# _printf Function README

This is a custom implementation of the printf function in C.

## Usage

```c
int _printf(const char *format, ...);

```

The _printf function takes a format string as the first argument and a variable number of arguments.
It formats and prints the data to the standard output (console) based on the given format string.

## Supported Format Specifiers
The following format specifiers are supported:

%c: Character
%s: String
%d or %i: Signed decimal integer
%u: Unsigned decimal integer
%x: Unsigned hexadecimal integer (lowercase)
%X: Unsigned hexadecimal integer (uppercase)

## Return Value
The function returns the total number of characters printed (excluding the null-terminating byte used to end output to strings).
In case of an error, it returns -1.

## Example

```
#include "main.h"

int main()
{
    int count;
    count = _printf("Hello, %s! You are %d years old.\n", "John", 30);
    _printf("Number of characters printed: %d\n", count);
    return (0);
}

```
## Notes

The _printf function does not implement all the features of the standard printf function in the C library.
It only supports a subset of format specifiers and basic functionality.
The code has been tested and should work correctly for valid format strings and arguments.
Please use the function responsibly and make sure to validate the input parameters.

