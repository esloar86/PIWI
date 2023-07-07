/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:24:25 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/17 21:37:09 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else if (nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
