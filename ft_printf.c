/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtavitia <vtavitia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:02:02 by vtavitia          #+#    #+#             */
/*   Updated: 2023/03/01 16:54:28 by vtavitia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printarg(char c, va_list ap)
{
	int	count;

	count = 0;
	if (c == '\0')
		return (-1);
	else if (c == 'c')
		count += ft_putchar(va_arg(ap, int));
	else if (c == 's')
		count += ft_putstr(va_arg(ap, char *));
	else if (c == 'd' || c == 'i')
		count += ft_putnbr(va_arg(ap, int));
	else if (c == 'u')
		count += ft_putlongnbr(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		count += ft_putnbr_base_16(va_arg(ap, unsigned int), c);
	else if (c == 'p')
	{
		count += ft_putstr("0x");
		count += ft_putnbr_base_16(va_arg(ap, unsigned long long ), 'x');
	}
	else if (c == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		i;
	int		tlen;

	i = 0;
	tlen = 0;
	va_start(ap, fmt);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			tlen += ft_printarg (fmt[i + 1], ap);
			i ++;
		}
		else
			tlen += ft_putchar (fmt[i]);
		i++;
	}
	va_end(ap);
	return (tlen);
}
