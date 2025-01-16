/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:30:41 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/13 14:14:18 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static unsigned int	ft_strlong(char *str)
{
	unsigned int	ctu;

	ctu = 0;
	while (str[ctu] != 0)
		ctu++;
	return (ctu);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ctu_dest;
	size_t	ctu_src;
	size_t	ctu_general;
	size_t	auxiliar;
	char	*srcs;

	srcs = (char *)src;
	ctu_dest = ft_strlong(dest);
	ctu_src = ft_strlong(srcs);
	if (size > ctu_dest)
		auxiliar = ctu_src + ctu_dest;
	else if (size <= ctu_dest)
		return (ctu_src + size);
	ctu_general = 0;
	while (src[ctu_general] != 0 && ctu_general < (size - ctu_dest - 1))
	{
		dest[ctu_dest + ctu_general] = srcs[ctu_general];
		ctu_general++;
	}
	if (ctu_dest + ctu_general < size)
		dest[ctu_dest + ctu_general] = '\0';
	return (auxiliar);
}
