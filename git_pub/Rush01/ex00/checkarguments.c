/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkarguments.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaalonso <jaalonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:39:45 by jaalonso          #+#    #+#             */
/*   Updated: 2023/07/16 20:57:33 by anibarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	checklength(int length);

int	checkarguments(int argc, char **argv)
{
	int	i;
	int	control;

	control = 0;
	i = 0;
	if (argc != 2)
		control = 1;
	else
	{
		while ((argv[1][i] != '\0') && (control == 0))
		{
			if ((argv[1][i] >= '1') && (argv[1][i] <= '4') && (i % 2 == 0))
				control = 0;
			else if ((argv[1][i] == 32) && (i % 2 != 0))
				control = 0;
			else
				control = 1;
			i++;
		}
	}
	if ((checklength(i) == 1) || (i < 31))
		control = 1;
	else
		control = 0;
	return (control);
}
