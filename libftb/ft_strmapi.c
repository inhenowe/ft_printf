/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:41:39 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 16:09:24 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		ctu;

	ctu = 0;
	if (!s)
		return (ft_strdup(""));
	str = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (ctu < ft_strlen(s))
	{
		str[ctu] = (*f)(ctu, s[ctu]);
		ctu++;
	}
	str[ctu] = 0;
	return (str);
}
