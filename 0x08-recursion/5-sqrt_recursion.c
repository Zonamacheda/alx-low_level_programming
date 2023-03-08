#include "main.h"
/**
 *_evaluate - evaluate function sqrt
 *@i: number
 *@n: integer
 *Return: evaluate sqrt
 */

int _evaluate(int i, int n)
{
/*Evaluate function*/
if (n == 0 || n == 1)
return (n);

else if (i * i < n)
return (_evaluate(i + 1, n));

else if (i * i == n)
return (1);

return (-1);

return (-1);
}
/**
 * _sqrt_recursion - sqrt
 * @n: integer
 * Return: sqrt_recursion
 */
int _sqrt_recursion(int n)

	if (i < 0) /* if n is negative*/
		return (-1);
	return (_evaluate(i, n)); /* Recursion call */
}
