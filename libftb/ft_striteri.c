/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:35:23 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 16:09:58 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	ctu;

	ctu = 0;
	if (!s)
		return ;
	while (s[ctu] != 0)
	{
		(*f)(ctu, s + ctu);
		ctu++;
	}
	s[ctu] = 0;
}
