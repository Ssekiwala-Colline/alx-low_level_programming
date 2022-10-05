#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

void _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);

#endif /*MAIN_H*/
