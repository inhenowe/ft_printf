/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 20:06:46 by aleortiz          #+#    #+#             */
/*   Updated: 2025/01/10 15:46:07 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_mini(unsigned long long nb);
int	print_hexa_maxi(unsigned long long mb);

int	print_hexa_mini(unsigned long long nb)
{
	int	ctu;

	ctu = 0;
	if (nb <= 9)
	{
		print_char(nb + '0');
		ctu++;
	}
	else if (nb >= 16)
	{
		ctu += print_hexa_mini(nb / 16);
		ctu += print_hexa_mini(nb % 16);
	}
	else
	{
		print_char(nb - 10 + 'a');
		ctu++;
	}
	return (ctu);
}

int	print_hexa_maxi(unsigned long long mb)
{
	int	ctu;

	ctu = 0;
	if (mb <= 9)
	{
		print_char(mb + '0');
		ctu++;
	}
	else if (mb >= 16)
	{
		ctu += print_hexa_maxi(mb / 16);
		ctu += print_hexa_maxi(mb % 16);
	}
	else
	{
		print_char(mb - 10 + 'A');
		ctu++;
	}
	return (ctu);
}
