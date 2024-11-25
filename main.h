#ifndef PRINTF_H
#define PRINTF_H

#include <stdlib.h> /* librairie standard (malloc, free) */
#include <stdarg.h> /* librairie standard (va_start, va_end, va_arg) */
#include <unistd.h> /* Accès API OS POSIX */

int _printf(const char *format, ...);

int _putchar(char c);

void print_char(va_list args);
void print_string(va_list args);
void print_int(va_list args);
void print_int_b10(va_list args);

/**
 * struct print - structure associant un format et une fonction de
 * affichage
 * @type: Le type d'argument
 * @f: La fonction associée pour afficher ce type d'argument
 */
typedef struct
{
    char *type;
    void (*f)(va_list args);
} print_type;

#endif
