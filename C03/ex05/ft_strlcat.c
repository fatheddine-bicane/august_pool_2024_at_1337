/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbicane <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 00:21:17 by fbicane           #+#    #+#             */
/*   Updated: 2024/08/15 04:01:26 by fbicane          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	ii;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	j = 0;
	ii = 0;
	while (src[i] != 0)
		i++;
	while (dest[j] != 0)
		j++;
	src_len = i;
	dest_len = j;
	if (size == 0 || size <= dest_len)
		return (src_len + size);
	while (src[ii] != 0)
	{
		dest[j] = src[ii];
		ii++;
		j++;
	}
	return (dest_len + src_len);
}
