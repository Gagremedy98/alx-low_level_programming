#include "main.h"
int _root_sqrt(int raiz, int cont);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 *@n: first value
 *
 * Return: Return solution
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (_root_sqrt(n, 1));
	}
}
