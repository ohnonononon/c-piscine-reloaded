/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:23:10 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/10 17:23:26 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
