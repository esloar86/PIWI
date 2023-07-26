/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusodici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 11:40:47 by jusodici          #+#    #+#             */
/*   Updated: 2023/07/09 12:02:15 by jusodici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	f;
	int	c;

	c = 1;
	while (c <= y && x > 0)
	{
		f = 1;
		while (f <= x)
		{
			if ((f == 1 && c == 1) || (f == x && c == y && f > 1 && c > 1))
				ft_putchar('/');
			else if ((f == x && c == 1) || (f == 1 && c == y))
				ft_putchar('\\');
			else if ((f == 1) || (f == x) || (c == 1) || (c == y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			f++;
		}
		ft_putchar('\n');
		c++;
	}
}
