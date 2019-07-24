#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sum of a and b
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	int res = 0;

	res = a + b;
	return (res);
}
/**
 * op_sub - substraction of a and b
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	int res = 0;

	res = a - b;
	return (res);
}
/**
 * op_mul - multiplication of a and b
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	int res = 0;

	res = a * b;
	return (res);
}
/**
 * op_div - division of a and b
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	int res = 0;

	res = a / b;
	return (res);
}
/**
 * op_mod - module of a and b
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mod(int a, int b)
{
	int res = 0;

	res = a % b;
	return (res);
}
