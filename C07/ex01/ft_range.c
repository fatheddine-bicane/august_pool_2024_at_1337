/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 17:13:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/13 05:07:25 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	*y;
	int	i;

	i = 0;
	x = max - min;
	y = (int *) malloc (x * sizeof(int));
	if (!y)
		return (0);
	if (min >= max)
		return (0);
	while (i < x)
	{
		y[i] = min;
		min++;
		i++;
	}
	return (y);
}
