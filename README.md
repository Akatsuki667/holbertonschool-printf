# Recreating the 'printf' function

## Description
This project consist in recreating the standard 'printf' function in the C library.
The aim is to gain a better understanding of the inner workings of this function and to master advanced programmings concepts, such as variadic arguments.

Key features include support for :
- **'%c'** : Displays a character
- **`%s`** : Displays a string of characters.
- **`%%`** : Displays the `%` symbol.
- **`%d`** : Displays an integer.
- **`%i`** : Displays an integer base 10.

## Project contents
- **`_printf.c`** : Contains the main `_printf` function, which interprets format specifiers and handles variadic arguments.
- **`print_func.c`** : Defines the functions associated with the various format specifiers (`%c`, `%s`, `%%`, `%d`, `%i`).
- **`main.h`** : Contains function prototypes and definitions required for the project.
- **`_putchar.c`** : Implements the `_putchar` function for displaying individual characters on standard output.

Thanks for reading, this project is a collaboration with https://github.com/daalagelerua.