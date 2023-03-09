/**
 * is_prime_number_2 - check code
 * @n: var
 * @i: var2
 * Return: 0 or 1
 */

int is_prime_number_2(int n, int i)
{
	if (n <= 2)
	{
		if (n == 2)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i * i > n)
	{
		return (1);
	}
	else
	{
		return (is_prime_number_2(n, i + 1));
	}
}
/**
 * is_prime_number - check code
 * @n: var
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (is_prime_number_2(n, 2));
}

