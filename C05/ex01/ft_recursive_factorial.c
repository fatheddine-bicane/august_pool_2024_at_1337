/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 21:34:18 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/11 22:47:08 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		x = nb * ft_recursive_factorial(nb - 1);
	}
	return (x);
}
