/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 14:33:46 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/25 19:17:06 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_ascending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_descending_sorted(int *tab, int lenght, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < lenght - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int		ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	if (ft_is_ascending_sorted(tab, lenght, f) ||
			ft_is_descending_sorted(tab, lenght, f))
		return (1);
	else
		return (0);
}

int		ft_strcmp(int nb1, int nb2)
{
	if (nb1 < nb2)
		return (-1);
	else if (nb1 == nb2)
		return (0);
	else
		return (1);
}
/*
**int		main()
**{
**	int		tab[] = {0, 1, 2, 3, 4, 5, 6, 5, 8, 9, 10, 11 };
**
**	printf("%d\n", ft_is_sort(tab, 11, &ft_strcmp));
**}
*/
