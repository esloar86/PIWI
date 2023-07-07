/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 12:40:51 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/19 11:31:11 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		len;

	len = max - min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(*range = (int *)malloc(sizeof(int) * len)))
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
**int		main(void)
**{
**	int		*range;
**	int		i;
**
**	i = 0;
**	printf("return : %d\n", ft_ultimate_range(&range, -5, 50));
**	while (i < 55)
**	{
**	printf("%d\n", range[i]);
**		i++;
**	}
**	return (0);
**}
*/
