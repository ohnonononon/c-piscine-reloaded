/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 17:32:34 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/10 18:04:53 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	aux_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str++))
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*nstr;
	int	i;
	int	len;

	if (!str)
	{
		nstr = malloc(sizeof(char) * 1);
		if (nstr)
			*nstr = '\0';
		return (nstr);
	}
	len = aux_strlen(str);
	nstr = malloc(sizeof(char) * len + 1);
	if (!nstr)
		return (NULL);
	i = 0;
	nstr[len] = '\0';
	while (i < len)
	{
		nstr[i] = str[i];
		i++;
	}
	return (nstr);
}
/*
#include <string.h>

int	main(void)
{
	char	*str;

	str = NULL;
	str = ft_strdup("test 1\n");
	ft_putstr(str);
	free (str);
	str = strdup("test 2\n");
	ft_putstr(str);
	free (str);
	return (0);
}
*/
