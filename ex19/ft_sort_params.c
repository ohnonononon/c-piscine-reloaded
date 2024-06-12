/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <nimatura@student.42barce>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 18:57:42 by ohnudes           #+#    #+#             */
/*   Updated: 2024/06/12 19:41:22 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(int c);

int	aux_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	aux_pstr(char *str)
{
	while (*str)
		ft_putchar(*(str++));
}

int	main(int ac, char **av)
{
	int		i;
	char	*tmp;

	if (ac < 2)
		return (0);
	i = 1;
	while (av[i + 1] != 0)
	{
		if (aux_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (av[i] != 0)
		aux_pstr(av[i++]);
	return (0);
}
