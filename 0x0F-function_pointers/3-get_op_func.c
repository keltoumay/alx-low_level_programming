#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct function to perform
 *               the operation asked by the user.
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding
 *         to the operator given as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},  /* Operator: Addition */
{"-", op_sub},  /* Operator: Subtraction */
{"*", op_mul},  /* Operator: Multiplication */
{"/", op_div},  /* Operator: Division */
{"%", op_mod},  /* Operator: Modulo */
{NULL, NULL},
};

int i = 0;

/**
 * Iterate over the array of operations until the
 * operator is found or the end of the array is reached.
 */
while (ops[i].op != NULL && *(ops[i].op) != *s)
i++;

return (ops[i].f);
}
