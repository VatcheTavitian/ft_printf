/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtavitia <vtavitia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 16:02:40 by vtavitia          #+#    #+#             */
/*   Updated: 2023/03/01 16:02:51 by vtavitia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_putnbr_base_16(unsigned long long nbr, char c);
int		ft_printarg(char c, va_list ap);
int		ft_putnbr(int nb);
int		ft_putlongnbr(unsigned int nb2);

#endif