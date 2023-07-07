/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_dict_lenght.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bdal-bia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 12:48:09 by bdal-bia          #+#    #+#             */
/*   Updated: 2019/06/23 15:16:56 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int		ft_verif_dict_lenght(void)
{
	int		i;
	int		j;
	int		fd;
	char	buffer;

	j = 0;
	i = -1;
	if ((fd = open("numbers.dict", O_RDONLY)) == -1)
		return (0);
	while (read(fd, &buffer, 1))
	{
		if (buffer == ' ' || buffer == ':')
		{
			if (i > j)
				j = i;
			ft_go_to_next_line(&fd, &i);
			continue ;
		}
		i++;
	}
	return (j + 2);
}

void	comp_str_dict(int len)
{
	int len_max;

	len_max = ft_verif_dict_lenght();
	if (len_max < len)
		ft_error();
}
