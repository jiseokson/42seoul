/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jison <jison@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:00:02 by jison             #+#    #+#             */
/*   Updated: 2022/10/11 22:57:39 by jison            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN(n) (!((n) % 2))
# define TRUE (1)
# define FALSE (0)
# define EVEN_MSG ("I have an even number of arguments.")
# define ODD_MSG ("I have an odd number of arguments.")
# define SUCCESS (0)

typedef int	t_bool;

#endif
