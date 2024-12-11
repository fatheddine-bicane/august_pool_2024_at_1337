/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 09:49:06 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/04 10:25:08 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == 0)
	{
		return (str);
	}
	while (str[i] != 0)
	{
		while (str[i + j] == to_find[j] && to_find[j] != 0)
		{
			j++;
		}
		if (to_find[j] == 0)
		{
			return (&str[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}
