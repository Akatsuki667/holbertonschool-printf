#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h> /* librairie standard (malloc, free) */
#include <stdarg.h> /* librairie standard (va_start, va_end, va_arg) */
#include <unistd.h> /* Accès API OS POSIX */

int _printf(const char *format, ...);

int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int print_number(unsigned int n);

/**
 * struct print - structure associant un format et une fonction de
 * affichage
 * @type: Le type d'argument
 * @f: La fonction associée pour afficher ce type d'argument
 */
typedef struct print
{
char *type;
int (*f)(va_list args);
} print_type;

#endif
