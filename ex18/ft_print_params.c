/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ohnudes <nimatura@student.42barcel>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:53:11 by ohnudes           #+#    #+#             */
/*   Updated: 2024/06/12 20:27:43 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	aux_pstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
	ft_putchar('\n');
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac < 2)
		return (0);
	while (av[i])
		aux_pstr(av[i++]);
	return (0);
}
