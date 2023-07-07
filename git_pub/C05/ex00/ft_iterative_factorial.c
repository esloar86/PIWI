/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:07:59 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/17 17:55:24 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		result;

	i = 1;
	result = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
