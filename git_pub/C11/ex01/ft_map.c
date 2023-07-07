/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:11:07 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/25 19:20:05 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int lenght, int (*f)(int))
{
	int		i;
	int		*output_tab;

	if (!(output_tab = (int *)malloc(sizeof(int) * lenght)))
		return (0);
	i = 0;
	while (i < lenght)
	{
		output_tab[i] = f(tab[i]);
		i++;
	}
	return (output_tab);
}
/*
**#include <stdio.h>
**int		sum_one(int x)
**{
**	return (x + 1);
**}
**void	display_array(int *arr, int len)
**{
**	int	i;
**
**	i = 0;
**	while (i < len)
**	{
**		printf("%d\n", arr[i++]);
**	}
**}
**int	main()
**{
**	int tmp[] = {1, 2, 3};
**	int *res = ft_map(tmp, 0, &sum_one);
**	display_array(res, 3);
**	int tmp2[] = {};
**	int *res2 = ft_map(tmp2, 0, &sum_one);
**	display_array(res2, 0);
**}
*/
