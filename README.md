# Recreating the 'printf' function

## Description
This project consist in recreating the standard 'printf' function in the C library.
The aim is to gain a better understanding of the inner workings of this function and to master advanced programmings concepts, such as variadic arguments.

Key features include support for :
- **`%c`** : Displays a character
- **`%s`** : Displays a string of characters.
- **`%%`** : Displays the `%` symbol.
- **`%d`** : Displays an integer.
- **`%i`** : Displays an integer base 10.

## Project contents
- **`_printf.c`** : Contains the main `_printf` function, which interprets format specifiers and handles variadic arguments.
- **`print_func.c`** : Defines the functions associated with the various format specifiers (`%c`, `%s`, `%%`, `%d`, `%i`).
- **`main.h`** : Contains function prototypes and definitions required for the project.
- **`_putchar.c`** : Implements the `_putchar` function for displaying individual characters on standard output.

For a better understanding, we provide you with the flowchart section, which contains diagrams corresponding to each file.

## Prerequisites
-**Compiler** : `gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`
-**Style** : follows the betty style's code (use `betty-style` and `betty-doc` for the code review)

## Installation
1. Clone the repository :
git clone https://github.com/Akatsuki667/holbertonschool-printf.git
2. Acces to project :
cd holbertonschool-printf
3. Compile the source code :
`gcc` with options `-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c`

## Examples of use
Here are some examples of how to use the `_printf` function :
### 1. Simple text display
_printf("Hello, World!\n");
### 1.1 Result
Hello, World!
### 2. Displaying charcaters and strings
_printf("Caractère : %c, Chaîne : %s\n", 'A', "Holberton");
### 2.1 Result
Caractère : A, Chaîne : Holberton
### 3. Displaying signed
_printf("Entier signé : %d\n", -123);
### 3.1 Result
Entier signé : -123
### 4. Displaying a percentage literal
_printf("Un pourcentage : %%\n");
### 4.1 Result
Un pourcentage : %

## Man page `_printf`
[man_3_printf](man_3_printf)

## Flowchart
- **`_printf.c`** : [flowchart _printf.c](https://app.diagrams.net/#HAkatsuki667%2Fholbertonschool-printf%2Fmain%2Fflowchat_printf.drawio#%7B%22pageId%22%3A%227UWGl-7bPe17A0hntDEX%22%7D)
- **`print_func.c`** :[flowchart print_func.c](https://app.diagrams.net/#HAkatsuki667%2Fholbertonschool-printf%2Fmain%2Fflowchart%20print_func.drawio#%7B%22pageId%22%3A%22lQksJHaqKnuztnZUSCbJ%22%7D)
- **Link between .h and .c files** : [flowchart link .h and .c](https://app.diagrams.net/#HAkatsuki667%2Fholbertonschool-printf%2Fmain%2Flien%20entre%20les%20fichiers%20c%20et%20h.drawio#%7B%22pageId%22%3A%22ikvIEtSnnO-6xkwY3rWI%22%7D)
- **Link between `print_int` and `print_number`** : [flowchart link `print_int` `print_number`](https://app.diagrams.net/#HAkatsuki667%2Fholbertonschool-printf%2Fmain%2Flien%20entre%20print_int%20et%20print_number.drawio#%7B%22pageId%22%3A%22LP4LyfZthlp-OlyTYgBT%22%7D)

## Contributors
This project was produced as part of the Holberton School program by :
- [Perillat Aurèle](https://github.com/daalagelerua)
- [Teyant Alexandre](https://github.com/Akatsuki667)
