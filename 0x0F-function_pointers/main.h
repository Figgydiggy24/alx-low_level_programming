#ifndef MAIN_H
#define MAIN_H

int (*get_op_func(char *s))(int, int);
int int_index(int *array, int size, int (*cmp)(int));
void array_iterator(int *array, size_t size, void (*action)(int));
void print_name(char *name, void (*f)(char *));
int _putchar(char c);

#endif 
