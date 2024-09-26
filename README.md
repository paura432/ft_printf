# ft_printf

**ft_printf** is a custom implementation of the standard C library function `printf`. It is designed to format and print data to the standard output, handling a variety of format specifiers and providing flexibility in how data is presented.

## Function Prototype

```c
int ft_printf(const char *format, ...);
```
## Parameters

- **format**: A string that specifies the format of the output. It can include:

  - **Format specifiers**: Begin with `%` and are followed by a character that specifies the type of data to be printed. Examples include:
    - `%d` or `%i` for integers.
    - `%s` for strings.
    - `%c` for characters.
    - `%x` or `%X` for hexadecimal numbers.
    - `%p` for pointers.
    - `%%` to print a literal percent sign.

  - **Text**: Any text outside of format specifiers is printed as-is.

- **... (variadic arguments)**: A variable number of arguments corresponding to the format specifiers in the `format` string.

## Behavior

- **Formatting Output**: Formats and prints data based on the format specifiers in the `format` string.
- **Return Value**: Returns the total number of characters printed, excluding the null terminator.
- **Handles Errors**: Manages edge cases like invalid format specifiers and handles various data types as inputs.

## Example Usage

Here’s a basic example of how to use `ft_printf`:

```c
#include "ft_printf.h"

int main(void)
{
    int num = 42;
    char *str = "Hello, world!";

    ft_printf("Number: %d, String: %s\n", num, str);
    return 0;
}
```
## Supported Format Specifiers

- `%d` / `%i`: Signed decimal integer.
- `%u`: Unsigned decimal integer.
- `%x` / `%X`: Unsigned hexadecimal integer (lowercase / uppercase).
- `%c`: Single character.
- `%s`: String of characters.
- `%p`: Pointer address.
- `%%`: Prints a percent sign.
