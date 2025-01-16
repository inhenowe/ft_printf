/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 11:23:28 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/10 18:51:25 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	ctu_str;

	ctu_str = 0;
	while (str[ctu_str] != 0)
		ctu_str++;
	return (ctu_str);
}
