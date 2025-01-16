/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:21:31 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/11 13:39:50 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;

	dest = malloc (ft_strlen(s) + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s, ft_strlen(s)+1);
	return (dest);
}
