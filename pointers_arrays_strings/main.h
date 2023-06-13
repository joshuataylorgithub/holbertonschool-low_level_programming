#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
#include <unistd.h>
#include <string.h>
#include <limits.h>

int _putchar(void);
void reset_to_98(int *n);
void swap_int(int *a, int *b);
int _strlen(char *s);
void _puts(char *str);
void print_rev(char *str);
void rev_string(char *s);
void puts2(char *str);
void puts_half(char *str);
void print_array(int *a, int n);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, const char *src, int n);
char *_strncpy(char *dest, const char *src, size_t n);
int _strcmp(const char *s1, const char *s2);
void reverse_array(int *a, int n);
void print_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *);
void simple_print_buffer(char *buffer, unsigned int size);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);



#endif
