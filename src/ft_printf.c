/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleortiz <aleortiz@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 16:41:40 by aleortiz          #+#    #+#             */
/*   Updated: 2025/01/15 17:58:53 by aleortiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libftb/libft.h"

static int	test(const char *format, va_list args, int ctu);
static int	menu(const char *format, va_list type, int ctu);
int			print_char(int c);

int	ft_printf(const char *format, ...)
{
	int		ctu;
	int		aux;
	int		word;
	va_list	type;

	ctu = -1;
	aux = 0;
	word = 0;
	va_start(type, format);
	while (format[++ctu])
	{
		if (format[ctu] == '%')
		{
			ctu++;
			aux += test(format, type, ctu);
		}
		else
		{
			write(1, &format[ctu], 1);
			word++;
		}
	}
	va_end(type);
	return (word + aux);
}

static int	test(const char *format, va_list args, int ctu)
{
	char	*type;
	int		aux;
	int		ctu_j;

	type = "cspdiuxX%";
	ctu_j = 0;
	aux = 0;
	while (format[ctu] != type[ctu_j] || !type)
		ctu_j++;
	if (type[ctu_j] == '\0')
		return (0);
	aux += menu(format, args, ctu);
	return (aux);
}

static int	menu(const char *format, va_list type, int ctu)
{
	int	aux;

	aux = 0;
	if (format[ctu] == 'c')
		aux += print_char(va_arg(type, int));
	if (format[ctu] == 's')
		aux += print_str(va_arg(type, char *));
	if (format[ctu] == 'p')
		aux += print_pointer(va_arg(type, void *));
	if (format[ctu] == 'i' || format[ctu] == 'd')
		aux += ft_print_decimal(va_arg(type, int));
	if (format[ctu] == 'u')
		aux += ft_print_unsigned(va_arg(type, unsigned int));
	if (format[ctu] == 'x')
		aux += print_hexa_mini(va_arg(type, unsigned int));
	if (format[ctu] == 'X')
		aux += print_hexa_maxi(va_arg(type, unsigned int));
	if (format[ctu] == '%')
		aux += print_char('%');
	return (aux);
}

int	print_char(int c)
{
	return (write(1, &c, 1));
}
