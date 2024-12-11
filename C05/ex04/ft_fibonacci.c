/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:08:13 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/12 10:52:33 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	x;

	x = 0;
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	x = (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	return (x);
}
