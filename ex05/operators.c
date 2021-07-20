#include "headers.h"

void	ft_plus(int a, int b)
{
	int	result;

	result = a + b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_minus(int a, int b)
{
	int	result;

	result = a - b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_mult(int a, int b)
{
	int	result;

	result = a * b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_div(int a, int b)
{
	int	result;

	if (b == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return ;
	}
	result = a / b;
	ft_putnbr(result);
	ft_putchar('\n');
}

void	ft_mod(int a, int b)
{
	int	result;

	if (b == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	result = a % b;
	ft_putnbr(result);
	ft_putchar('\n');
}
