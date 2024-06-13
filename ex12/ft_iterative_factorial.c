/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:22:25 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/13 15:30:44 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// fixed: res was declared as long - but shouldn't
// the value returned is an int.
// fixed: nb > 12 returns 0
int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb <= 0)
		return (1);
	res = 1;
	while (nb >= 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_iterative_factorial(12));
}*/
