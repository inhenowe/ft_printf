/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:01:39 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/10 15:58:40 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	unsigned const char	*c_src;
	size_t				ctu_d;

	c_dest = dest;
	c_src = src;
	ctu_d = 0;
	if (!dest && !src && n > 0)
		return ((void *) 0);
	while (ctu_d < n)
	{
		c_dest[ctu_d] = c_src[ctu_d];
		ctu_d++;
	}
	if (ctu_d < n)
		c_dest[ctu_d] = '\0';
	return (dest);
}
