/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:21:31 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/12 16:23:38 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	i;

	x = nb;
	i = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (i < x)
	{
		nb = nb * (x - i);
		i++;
	}
	return (nb);
}
