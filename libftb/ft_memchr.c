/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:58:33 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/13 13:51:24 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*str;
	size_t				ctu;

	ctu = 0;
	str = (unsigned char *)s;
	while (ctu < n)
	{
		if (str[ctu] == (unsigned char)c)
		{
			return ((char *)s + ctu);
		}
		ctu++;
	}
	return (0);
}
