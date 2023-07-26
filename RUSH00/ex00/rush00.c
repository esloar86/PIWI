/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 11:30:09 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/09 12:14:05 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	p_h;
	int	p_v;

	p_v = 1;
	while ((p_v <= y) && (x > 0))
	{
		p_h = 1;
		while (p_h <= x)
		{
			if ((p_h != 1 && p_h != x) && (p_v == 1 || p_v == y))
				ft_putchar('-');
			else if ((p_h == 1 || p_h == x) && (p_v != 1 && p_v != y))
				ft_putchar('|');
			else if ((p_h == 1) || (p_h == x) || (p_v == 1) || (p_v == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			p_h++;
		}
		ft_putchar('\n');
		p_v++;
	}
}
