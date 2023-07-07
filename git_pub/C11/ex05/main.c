/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:07:02 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/24 17:00:50 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_do_op(char **argv, int nb1, int nb2)
{
	if (!ft_strcmp(argv[2], "+"))
		ft_putnbr(ft_addition(nb1, nb2));
	else if (!ft_strcmp(argv[2], "-"))
		ft_putnbr(ft_substraction(nb1, nb2));
	else if (!ft_strcmp(argv[2], "*"))
		ft_putnbr(ft_multiplication(nb1, nb2));
	else if (!ft_strcmp(argv[2], "/"))
	{
		if (nb2 == 0)
			write(1, "Stop : division by zero", 23);
		else
			ft_putnbr(ft_division(nb1, nb2));
	}
	else if (!ft_strcmp(argv[2], "%"))
	{
		if (nb2 == 0)
			write(1, "Stop : modulo by zero", 21);
		else
			ft_putnbr(ft_modulo(nb1, nb2));
	}
	else
		ft_putnbr(0);
}

int		main(int argc, char **argv)
{
	int		nb1;
	int		nb2;

	if (argc != 4)
		return (1);
	nb1 = ft_atoi(argv[1]);
	nb2 = ft_atoi(argv[3]);
	ft_do_op(argv, nb1, nb2);
	write(1, "\n", 1);
	return (0);
}
