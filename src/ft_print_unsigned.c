/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 18:42:52 by aleortiz          #+#    #+#             */
/*   Updated: 2025/01/13 14:25:09 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_un(unsigned int nb, int fd);

int	ft_print_unsigned(unsigned int nb)
{
	int	i;

	i = 0;
	ft_putnbr_un(nb, 1);
	if (nb == 0)
		i = 1;
	while (nb > 0)
	{
		i++;
		nb /= 10;
	}
	return (i);
}

void	ft_putnbr_un(unsigned int nb, int fd)
{
	if (nb >= 10)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putchar_fd(nb % 10 + '0', fd);
	}
	if (nb < 10)
		ft_putchar_fd(nb % 10 + '0', fd);
}
