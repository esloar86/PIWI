/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separator.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdubreil <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 17:55:45 by cdubreil          #+#    #+#             */
/*   Updated: 2019/06/22 19:00:55 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*create_number(int j)
{
	char	*str;
	int		i;

	i = 1;
	str = (char *)malloc((j - 1) * 3 + 2);
	str[0] = '1';
	while (i < (j - 1) * 3 + 1)
	{
		str[i] = '0';
		i++;
	}
	str[i] = 0;
	return (str);
}

void	print_separator(int j)
{
	if (j > 1)
		putstr(ft_parse_dict(create_number(j)));
}
