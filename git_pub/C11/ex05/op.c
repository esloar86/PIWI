/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:27:18 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/24 16:53:05 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_addition(int nb1, int nb2)
{
	return (nb1 + nb2);
}

int		ft_substraction(int nb1, int nb2)
{
	return (nb1 - nb2);
}

int		ft_multiplication(int nb1, int nb2)
{
	return (nb1 * nb2);
}

int		ft_division(int nb1, int nb2)
{
	return (nb1 / nb2);
}

int		ft_modulo(int nb1, int nb2)
{
	return (nb1 % nb2);
}
