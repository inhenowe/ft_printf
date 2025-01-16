/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 19:21:28 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/13 13:26:11 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	ctu_b;
	size_t	ctu_l;
	char	*str;
	char	*tf;

	ctu_b = 0;
	ctu_l = 0;
	str = (char *) big;
	tf = (char *) little;
	if (tf[0] == '\0')
		return (str);
	while (str[ctu_b] != 0)
	{
		while (str[ctu_b + ctu_l] == tf[ctu_l]
			&& tf[ctu_l] != 0 && ctu_l + ctu_b < (len))
		{
			ctu_l++;
		}
		if (tf[ctu_l] == '\0')
			return (&str[ctu_b]);
		ctu_l = 0;
		ctu_b++;
	}
	return (0);
}
