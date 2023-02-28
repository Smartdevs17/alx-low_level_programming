#include "main.h"
/**
*swap_int - swap two integers
*@a: first number
*@b: second number
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}
