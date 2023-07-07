/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 23:40:25 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/14 11:18:50 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	while (argc > 1)
	{
		ft_putstr(argv[argc - 1]);
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
