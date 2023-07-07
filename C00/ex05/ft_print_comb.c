/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 10:29:20 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/06 10:29:25 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(char i, char j, char k)
{
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				write(1, &i, 1);
				write(1, &j, 1);
				write(1, &k, 1);
				if (! (i == '7' && j == '8' && k == '9'))
					write(1, ", ", 3);
				k++;
			}
			j++;
		}
		i++;
	}
}

/*int	main (void)
{
	char	i;
	char	j;
	char	k;
	
	i = '0';
	j = '1';
	k = '2';
	ft_print_comb (i, j, k);
	return (0);
}*/