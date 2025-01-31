/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaalonso <jaalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:55:59 by jaalonso          #+#    #+#             */
/*   Updated: 2023/07/16 20:50:44 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkarguments(int argc, char *argv[]);
int	split(int cont, char **argv);

int	main(int argc, char **argv)
{
	int	sum;
	int	sum_tot;

	sum = 0;
	sum_tot = 0;
	if (checkarguments(argc, argv) == 1)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
	{
		while (argv[1][sum_tot])
		{
			if (argv[1][sum_tot] > 48 && argv[1][sum_tot] <= 57)
				sum++;
			sum_tot++;
		}
		split(sum, argv);
	}
	return (0);
}
