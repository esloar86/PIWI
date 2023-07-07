/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 14:08:08 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/17 17:58:06 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (nb % i != 0)
	{
		if (nb > 1000000 && i > 1000)
			return (1);
		i++;
	}
	if (i == nb)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int		i;

	i = 0;
	while (!ft_is_prime(nb + i))
	{
		i++;
	}
	return (nb + i);
}
