/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 13:11:56 by aleortiz          #+#    #+#             */
/*   Updated: 2024/12/10 13:46:37 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c < 65 || c > 90) && (c < 97 || c > 122) \
		&& (c < 48 || c > 57))
	{
		return (0);
	}
	return (1);
}
