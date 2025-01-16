/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 13:08:56 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 15:57:08 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*substr;

	str = (char *)s;
	if ((((unsigned int)ft_strlen(str) < start)))
	{
		substr = (char *)ft_calloc(1, 1);
		if (!substr)
			return ((void *)0);
		return (substr);
	}
	if ((len > (unsigned int) ft_strlen(str) - start))
		len = (unsigned int) ft_strlen(str) - start;
	substr = (char *)ft_calloc(1, len + 1);
	if (!substr)
		return ((void *)0);
	substr[len] = '\0';
	if (!substr || !s)
		return ((void *)0);
	ft_memcpy(substr, str + start, len);
	return (substr);
}
