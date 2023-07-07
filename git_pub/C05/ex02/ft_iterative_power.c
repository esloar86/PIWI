/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 20:50:15 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/17 17:57:12 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = nb;
	while (power > 1)
	{
		nb *= i;
		power--;
	}
	return (nb);
}
