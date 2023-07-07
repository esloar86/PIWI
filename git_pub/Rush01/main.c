/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/16 10:23:10 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/16 10:58:29 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_colored_char(char c)
{
	if (c == '1')
		write(1, "\033[1;33", 9);
	else if (c == '2')
		write(1, "\033[0;32", 9);
	else if (c == '3')
		write(1, "\033[0;34", 9);
	else if (c == '4')
		write(1, "\033[0;31", 9);
	else if (c == '5')
		write(1, "\033[0;36", 9);
	else if (c == '6')
		write(1, "\033[1;34", 9);
	else if (c == '7')
		write(1, "\033[1;32", 9);
	else if (c == '8')
		write(1, "\033[0;35", 9);
	else if (c == '9')
		write(1, "\033[0;33", 9);
	write(1, &c, 1);
	write(1, "\033[0m", 7);

}

void	ft_display_grid(int *arr, int max_value)
{
	int		x;
	int		y;

	x = 0;
	while (x < max_value)
	{
		y = 0;
		while (y < max_value)
		{
			ft_put_colored_char(arr[x][y] + '0');
			y++;
		}
		ft_put_colored_char('\n');
		x++;
	}
}

int		main(int argc, char **argv)
{
	return (0);
}
