/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 10:23:42 by marvin            #+#    #+#             */
/*   Updated: 2023/07/23 21:50:45 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "rush02_lib.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\n')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			write (1, &str[i], 1);
			write (1, "entro2", 6);
			i++;
		}
		else
			i++;
		break;
	}
}
char	*ft_search(char *file, char *find)
{
	int	i;
	int	j;

	i = 0;
	while (file[i] != '\0')
	{
		while (file[i + j] == find[j] && file[i + j] != '\0')
		{
			j++;
		}
		if (find[j] == '\0')
			return (file + i);
		i++;
		j = 0;
	}
	return (0);
}
