/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 14:11:14 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 15:55:57 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	int		ctu_str;
	char	*str;

	ctu_str = 0;
	str = (char *)src;
	while (str[ctu_str] != (char)c && str[ctu_str] != 0)
	{
		ctu_str++;
	}
	if (str[ctu_str] == (char)c)
	{
		return (&str[ctu_str]);
	}
	return (0);
}
