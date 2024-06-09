/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes <nimatura@student.42barcel>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:53:11 by ohnudes           #+#    #+#             */
/*   Updated: 2024/06/09 18:56:05 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

void	aux_pstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac < 2)
		return (0);
	while (ac--)
		aux_pstr(av[i++]);
	return (0);
}
