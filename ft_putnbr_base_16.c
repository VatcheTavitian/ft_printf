/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bse_16.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtavitia <vtavitia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:05:02 by vtavitia          #+#    #+#             */
/*   Updated: 2023/03/01 16:05:11 by vtavitia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_16(unsigned long long nbr, char c)
{
	char	*xbase;
	char	*ubase;
	int		count;

	xbase = "0123456789abcdef";
	ubase = "0123456789ABCDEF";
	count = 0;
	if (nbr >= 16 && c == 'x')
	{
		count += ft_putnbr_base_16(nbr / 16, c);
		count += ft_putchar(xbase[nbr % 16]);
	}
	else if (nbr >= 16 && c == 'X')
	{
		count += ft_putnbr_base_16(nbr / 16, c);
		count += ft_putchar(ubase[nbr % 16]);
	}
	if (nbr < 16 && c == 'x')
		count += ft_putchar(xbase[nbr % 16]);
	if (nbr < 16 && c == 'X')
		count += ft_putchar(ubase[nbr % 16]);
	return (count);
}
