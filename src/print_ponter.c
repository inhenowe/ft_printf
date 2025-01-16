/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ponter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 15:14:49 by aleortiz          #+#    #+#             */
/*   Updated: 2025/01/10 15:46:47 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_pointer(void *ptr)
{
	unsigned long long	position;

	position = (unsigned long long)ptr;
	if (!position)
		return (print_str("(nil)"));
	else
	{
		print_str("0x");
		return (print_hexa_mini(position) + 2);
	}
}
