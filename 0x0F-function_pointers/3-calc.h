#ifndef CALC_H
#define CALC_H
#define NULL ((void *)0)

/* Librerías */

#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototipos */
int (*get_op_func(char *s))(int, int);
int op_add(int Number1, int Number2);
int op_sub(int Number1, int Number2);
int op_mul(int Number1, int Number2);
int op_div(int Number1, int Number2);
int op_mod(int Number1, int Number2);

#endif
