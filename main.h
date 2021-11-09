#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

typedef struct another_case {
        char *mtch;
        int (*function)(va_list);
} case_t;

int _printf(const char *format, ...);

int _putchar(char c);

int print_string(va_list s);
int print_char(va_list c);
int (*search_character(const char *nxchr, int num))(va_list);

#endif

