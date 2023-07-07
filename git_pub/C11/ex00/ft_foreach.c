/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 21:45:15 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/24 14:13:33 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int lenght, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < lenght)
	{
		f(tab[i]);
		i++;
	}
}
/*
**void	ft_putnbr(int nbr);
**
**int		main(void)
**{
**	int		tab[1337];
**	int		i;
**
**	i = 0;
**	while (i <= 1337)
**	{
**		tab[i] = i;
**		i++;
**	}
**	ft_foreach(tab, 1337, &ft_putnbr);
**	return (0);
**}
*/
