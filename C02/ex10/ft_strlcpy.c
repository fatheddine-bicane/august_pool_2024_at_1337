/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 00:06:10 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/14 00:10:11 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	sl;

	i = 0;
	sl = 0;
	while (src[sl] != 0)
		sl++;
	while (src[i] != 0 && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	return (sl);
}
