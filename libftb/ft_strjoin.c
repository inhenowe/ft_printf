/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 16:17:27 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/15 12:27:40 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int				ct1;
	int				ct2;
	char			*newstr;
	unsigned int	n1;

	n1 = (unsigned int)ft_strlen(s1) + (unsigned int)ft_strlen(s2);
	newstr = (char *)malloc((n1 + 1));
	ct1 = 0;
	ct2 = 0;
	if (!newstr)
		return ((void *) 0);
	while (s1[ct1] != 0)
		newstr[ct2++] = s1[ct1++];
	ct1 = 0;
	while (s2[ct1] != 0)
		newstr[ct2++] = s2[ct1++];
	newstr[ct2] = 0;
	return (newstr);
}
