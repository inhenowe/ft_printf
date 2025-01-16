/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:34:33 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/11 13:43:14 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	ctu_i;

	ctu_i = 0;
	while (src[ctu_i] && ctu_i + 1 < destsize)
	{
		dest[ctu_i] = src[ctu_i];
		ctu_i++;
	}
	if (ctu_i < destsize)
		dest[ctu_i] = 0;
	while (src[ctu_i])
		ctu_i++;
	return (ctu_i);
}
