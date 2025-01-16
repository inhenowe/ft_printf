/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 18:56:31 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 15:51:52 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		ctu_str;
	int		ult_str;
	char	*null;

	ult_str = -1;
	null = (char *)str;
	ctu_str = ft_strlen(null);
	while (ctu_str >= 0)
	{
		if (null[ctu_str] == (char)c)
		{
			ult_str = ctu_str;
			return (&null[ult_str]);
		}
		ctu_str--;
	}
	if (ult_str == 0 && c == '\0')
		return (null);
	if (ult_str == -1 && c != '\0')
		return ((void *)0);
	return (&null[ult_str]);
}
