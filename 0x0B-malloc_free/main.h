#ifndef MAIN_H
#define MAIN_H
char **strtow(char *str);
char *argstostr(int ac, char **av);
void free_grid(int **grid, int height);   
int **alloc_grid(int width, int height);  
char *str_concat(char *s1, char *s2);  
char *_strdup(char *str); 
char *create_array(unsigned int size, char c);
int _putchar(char c);
void simple_print_buffer(char *buffer, unsigned int size);
#endif
