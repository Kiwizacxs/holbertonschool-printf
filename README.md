<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title> FUNCTION PRINTF </title>
</head>
<body>
    <h1>_printf Function README</h1>
    <p>This is a custom implementation of the printf function in C.</p>

    <h2>Usage</h2>
    <pre>
        int _printf(const char *format, ...);
    </pre>
    <p>
        The _printf function takes a format string as the first argument and a variable number of arguments.
        It formats and prints the data to the standard output (console) based on the given format string.
    </p>

    <h2>Supported Format Specifiers</h2>
    <p>
        The following format specifiers are supported:
        <ul>
            <li>%c: Character</li>
            <li>%s: String</li>
            <li>%d or %i: Signed decimal integer</li>
            <li>%u: Unsigned decimal integer</li>
            <li>%x: Unsigned hexadecimal integer (lowercase)</li>
            <li>%X: Unsigned hexadecimal integer (uppercase)</li>
        </ul>
    </p>

    <h2>Return Value</h2>
    <p>
        The function returns the total number of characters printed (excluding the null-terminating byte used to end output to strings).
        In case of an error, it returns -1.
    </p>

    <h2>Example</h2>
    <pre>
        ///*example*///
    </pre>

    <h2>Notes</h2>
    <p>
        - The _printf function does not implement all the features of the standard printf function in the C library.
        - It only supports a subset of format specifiers and basic functionality.
        - The code has been tested and should work correctly for valid format strings and arguments.
        - Please use the function responsibly and make sure to validate the input parameters.
    </p>
</body>
</html>
