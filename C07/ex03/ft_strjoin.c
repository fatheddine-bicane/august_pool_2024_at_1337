/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 19:43:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/13 18:21:50 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_fatheddine_bicane(char *array, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	a;
	int	s;

	j = 0;
	a = 0;
	while (j < size)
	{
		if (j > 0)
		{
			s = 0;
			while (sep[s] != 0)
				array[a++] = sep[s++];
		}
		i = 0;
		while (strs[j][i] != 0)
			array[a++] = strs[j][i++];
		j++;
	}
	array[a] = 0;
	return (array);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		j;
	int		total_len;
	char	*array;

	j = 0;
	if (size == 0)
	{
		array = malloc(sizeof(char));
		if (!array)
			return (0);
		array[0] = 0;
		return (array);
	}
	while (j < size)
	{
		total_len = total_len + count_len(strs[j]);
		j++;
	}
	total_len = total_len + (count_len(sep) * (size - 1));
	array = (char *) malloc (sizeof(char) * (total_len) + 1);
	if (!array)
		return (0);
	return (ft_fatheddine_bicane(array, strs, sep, size));
}
