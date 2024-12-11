/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 11:17:02 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/13 05:09:27 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	x;

	i = 0;
	x = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = (int *) malloc (x * sizeof(int));
	if (*range == 0)
		return (-1);
	while (i < x)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (x);
}
