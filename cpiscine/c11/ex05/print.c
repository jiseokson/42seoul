/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jison <jison@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:14:15 by jison             #+#    #+#             */
/*   Updated: 2022/10/13 20:33:29 by jison            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int n)
{
	char	*dec_digit;

	if (n / 10 != 0)
		ft_putnbr(n / 10);
	dec_digit = "0123456789";
	write(1, dec_digit + (n % 10), 1);
}
