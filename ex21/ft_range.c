/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 18:08:08 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/10 18:21:41 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;
	int	range;
	
	if (min > max)
		return (NULL);
	i = 0;
	range = max - min;
	arr = malloc(sizeof(int) * range);
	if (!arr)
		return (NULL);
	while (i < range)
		arr[i++] = min++;
	return (arr);
}
/*
#include <stdio.h>

int	main(void)
{
	int	*arr;
	int	min;
	int	max;
	int	range;
	int	i;

	arr = NULL;
	min = 1;
	max = 2;
	range = max - min;
	i = 0;

	arr = ft_range(min, max);
	printf("min\tmax\n");
	printf("%d\t%d\n", min, max);
	printf("i\tnum\tmax\n");
	while (i < range)
	{
		printf("%i\t%d\t%d\n", i, arr[i], max);
		i++;
	}
	free (arr);
	return (0);
}*/
