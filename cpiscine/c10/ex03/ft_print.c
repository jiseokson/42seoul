/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jison <jison@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:00:08 by jison             #+#    #+#             */
/*   Updated: 2022/10/19 19:40:21 by jison            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_print.h"

void	ft_fprint(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_fprint_char(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_print_file_name(char *path)
{
	ft_fprint(1, "==> ");
	ft_fprint(1, path);
	ft_fprint(1, " <==\n");
}

void	ft_print_usage(void)
{
	char	*temp;

	ft_fprint(1, "tail: option requires an argument -- c\n");
	temp = "usage: tail [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n";
	ft_fprint(1, temp);
}

void	ft_print_file_error(char *program_name, char *path, char *error)
{
	ft_fprint(2, program_name);
	ft_fprint(2, ": ");
	ft_fprint(2, path);
	ft_fprint(2, ": ");
	ft_fprint(2, error);
	ft_fprint(2, "\n");
}

void	ft_print_offset_error(char *program_name, char *offset)
{
	ft_fprint(2, program_name);
	ft_fprint(2, ": illegal offset -- ");
	ft_fprint(2, offset);
	ft_fprint(2, "\n");
}
