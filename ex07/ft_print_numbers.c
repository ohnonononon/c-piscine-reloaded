/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 14:12:11 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/09 14:15:48 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

void	ft_print_numbers(void)
{
	int	c;

	c = '0';
	while (c <= '9')
		ft_putchar(c++);
}
/*
int	main(void)
{
	ft_print_numbers();
}*/
