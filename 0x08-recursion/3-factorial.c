
/**
 * factorial - check code
 * @n: var
 * Return: 0
 */

int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		res = n * factorial(n - 1);
		return (res);
	}
}
