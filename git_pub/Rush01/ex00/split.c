/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaalonso <jaalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:26:29 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/16 20:58:43 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	split(int cont, char **argv)
{
	int		y;
	int		i;
	int		j;
	int		size;
	int		k;
	char	*positions[4];

	y = 0;
	while (y < 4)
	{
		positions[y] = (char *)malloc(4 * sizeof(char));
		y++;
	}
	i = 0;
	j = 0;
	k = 0;
	size = cont / 4;
	while (argv[1][i])
	{
		if (j == size)
		{
			positions[k][j + 1] = 0;
			j = 0;
			k++;
		}
		if (argv[1][i] != 32)
		{
			positions[k][j] = argv[1][i];
			j++;
		}
		i++;
	}
	return (0);
}
