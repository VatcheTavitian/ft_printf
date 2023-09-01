/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlongnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtavitia <vtavitia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:03:54 by vtavitia          #+#    #+#             */
/*   Updated: 2023/03/01 16:03:56 by vtavitia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putlongnbr(unsigned int nb)
{
	int			count;

	count = 0;
	if (nb < 10)
	{
		nb += 48;
		write(1, &nb, 1);
		count++;
	}
	else if (nb >= 10)
	{
		count += ft_putlongnbr(nb / 10);
		count += ft_putlongnbr(nb % 10);
	}
	return (count);
}
