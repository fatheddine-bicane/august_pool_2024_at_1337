/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:38:57 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/12 11:46:40 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x < nb)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
