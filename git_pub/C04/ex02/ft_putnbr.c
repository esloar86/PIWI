/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:22:20 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/09 22:50:16 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	nb_c[10];
	long	nb_l;
	int		i;

	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb_l = nb;
		nb_l = -nb_l;
	}
	else
		nb_l = nb;
	i = 0;
	while (nb_l > 0)
	{
		nb_c[i] = nb_l % 10 + '0';
		nb_l /= 10;
		i++;
	}
	while (--i >= 0)
		ft_putchar(nb_c[i]);
}
