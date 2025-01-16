/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:04:54 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/11 17:13:46 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*c_dest;
	unsigned char		*c_src;

	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	if ((!dest && !src))
		return ((void *) 0);
	if (src < dest)
	{
		c_dest = c_dest + n - 1;
		c_src = c_src + n - 1;
		while (n--)
			*c_dest-- = *c_src--;
	}
	else if (src >= dest)
	{
		while (n--)
			*c_dest++ = *c_src++;
	}
	return (dest);
}
