#ifndef MAIN_H
#define MAIN_H
int _isdigit(char c);
int _strlen(char *s);
char *multiply(char *num1, char *num2);
int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
#endif
