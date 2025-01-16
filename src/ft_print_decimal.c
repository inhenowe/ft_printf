/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_decimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:29:34 by aleortiz          #+#    #+#             */
/*   Updated: 2025/01/13 15:07:42 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int n)
{
	int	i;

	i = 0;
	ft_putnbr_fd(n, 1);
	if (n == -2147483648)
		return (11);
	if (n == 0)
		i = 1;
	if (n < 0)
	{
		n *= -1;
		i = 1;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}
