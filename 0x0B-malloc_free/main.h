#ifndef _MAIN_H_
#define _MAIN_H_

#include <string.h>


void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
char *str_concat(char *s1, char *s2);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
int _putchar(char c);

#include <stdint.h>
#include <string.h>
#include <time.h>
#include <stdio.h>

#endif /* _MAIN_H_ */
