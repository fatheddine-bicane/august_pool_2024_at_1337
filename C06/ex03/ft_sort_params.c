/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 13:20:36 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/13 16:45:30 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != 0 || s2[i] != 0)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		else
			i++;
	}
	return (0);
}

void	ft_swap(char **str1, char **str2)
{
	char	*mika;

	mika = *str1;
	*str1 = *str2;
	*str2 = mika;
}

int	main(int argc, char **argv)
{
	int	c;
	int	v;

	c = 1;
	while (c < argc - 1)
	{
		v = c + 1;
		while (v < argc)
		{
			if ((ft_strcmp(argv[c], argv[v]) > 0))
				ft_swap(&argv[c], &argv[v]);
			v++;
		}
		v = 0;
		c++;
	}
	c = 1;
	while (c < argc)
	{
		ft_putstr(argv[c]);
		write(1, "\n", 1);
		c++;
	}
}
