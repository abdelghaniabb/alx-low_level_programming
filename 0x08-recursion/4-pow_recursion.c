/**
 * _pow_recursion - chek code
 * @x: base
 * @y: puissance
 * Return: x^y
 */

int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
	{
		return (-1);
	}
	else if (y > 0)
	{
		res = x * _pow_recursion(x, y - 1);
		return (res);
	}
	else
	{
		return (res);
	}
}
