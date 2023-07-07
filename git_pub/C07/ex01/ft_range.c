/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 16:42:57 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/18 18:27:56 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min))))
		return (0);
	i = 0;
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
**int		main(void)
**{
**	int		i;
**	int		*tab;
**
**	tab = ft_range(52, 59);
**	i = 0;
**	while (i < 7)
**	{
**		printf("%d\n", tab[i]);
**		i++;
**	}
**}
*/
