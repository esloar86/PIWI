/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 21:42:52 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/19 16:25:14 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN(x)	x % 2 == 0
# define SUCCESS	0
# define TRUE		1
# define FALSE		0

typedef	int	t_bool;

#endif
