/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtavitia <vtavitia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:04:22 by vtavitia          #+#    #+#             */
/*   Updated: 2023/03/01 16:04:32 by vtavitia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb2)
{
	int			count;
	long		nb;

	count = 0;
	nb = nb2;
	if (nb < 0)
	{
		count += ft_putchar('-');
		nb *= -1;
	}
	if (nb < 10)
	{
		nb += '0';
		count += ft_putchar(nb);
	}
	else
	{
		count += ft_putnbr(nb / 10);
		count += ft_putnbr(nb % 10);
	}
	return (count);
}
