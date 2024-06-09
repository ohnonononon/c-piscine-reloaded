/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:16:39 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/09 15:25:00 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(int c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	while (*s != '\0' && ft_putchar(*s) == 1)
		s++;
	return (0);
}

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

void	test_isneg(void)
{
	ft_putstr("\n//// IS_NEG TEST ///\n");
	ft_putstr("\nn = 10,\t");
	ft_is_negative(10);
	ft_putstr("\nn = 0,\t");
	ft_is_negative(0);
	ft_putstr("\nn = -1,\t");
	ft_is_negative(-1);
	ft_putchar('\n');
}

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

#include <limits.h>

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	res;

	if (nb < 1 || nb > 12)
		return (0);
	i = 2;
	res = 1;
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}

int	ft_recursive_factorial(int nb)
{
	if (nb == 2)
		return (2);
	if (nb < 1)
		return (0);
	if (nb > 12)
		return (0);
	return (nb * ft_recursive_factorial(nb - 1));
}

int	ft_s

#include <stdio.h>

int	main(void)
{
	//test_isneg();
	int	n = 12; 
	printf("iter fact	%d:	%d\n", n, ft_recursive_factorial(n));
}
