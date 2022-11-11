/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jison <jison@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 13:14:49 by jison             #+#    #+#             */
/*   Updated: 2022/11/10 21:13:25 by jison            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include "libft.h"

static int	ft_isspace(char c)
{
	char	*spaces;

	spaces = "\t\n\v\f\r ";
	while (*spaces && *spaces != c)
		++spaces;
	return (*spaces == c);
}

int	ft_atoi(const char *str)
{
	int	ret;
	int	sign;

	ret = 0;
	sign = 1;
	while (*str && ft_isspace(*str))
		++str;
	if (*str == '+')
	{
		++str;
	}
	else if (*str == '-')
	{
		++str;
		sign = -1;
	}
	while (*str && ft_isdigit(*str))
	{
		ret = ret * 10 + sign * (*str - '0');
		++str;
	}
	return (ret);
}
