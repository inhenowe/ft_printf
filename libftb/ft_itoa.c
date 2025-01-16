/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:51:03 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/23 16:49:51 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	number_of_numbers(long number);

char	*ft_itoa(int n)
{
	char		*numchar;
	size_t		space;
	long		nb;

	nb = (long)n;
	space = number_of_numbers(nb);
	numchar = (char *)malloc(sizeof(char) * (space + 1));
	if (!numchar)
		return (NULL);
	if (nb == 0)
		numchar[0] = '0';
	if (nb < 0)
	{
		nb = -nb;
		numchar[0] = '-';
	}
	numchar[space] = '\0';
	while (nb > 0)
	{
		numchar[--space] = ((nb % 10) + '0');
		nb = nb / 10;
	}
	return (numchar);
}

static size_t	number_of_numbers(long number)
{
	size_t	count;

	count = 0;
	if (number < 0)
	{
		number = -number;
		count++;
	}
	if (number == 0)
		count++;
	while (number > 0)
	{
		count ++;
		number /= 10;
	}
	return (count);
}
