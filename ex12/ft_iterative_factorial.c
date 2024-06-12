/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:22:25 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/12 21:24:22 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	long	res;

	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (0);
	res = 1;
	while (nb >= 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}
