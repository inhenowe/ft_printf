/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:11:19 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/10 14:01:31 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int car, int cant_car)
{
	int		ctu;
	char	*str;

	str = s;
	ctu = 0;
	while (ctu < cant_car)
	{
		str[ctu] = car;
		ctu++;
	}
	return (str);
}
