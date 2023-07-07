/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msitti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 15:09:08 by msitti            #+#    #+#             */
/*   Updated: 2019/06/15 20:55:17 by msitti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_digit(char c)
{
	if (c >= '1' && c <= '9')
		return (0);
	return (1);
}

int		is_space(char c)
{
	if (c == ' ')
		return (0);
	return (1);
}

int		total_of_digit(char *str)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (is_digit(str[i]))
			n++;
		i++;
	}
	return (n);
}

int		grid_max_value(char *str)
{
	int		max_value;

	max_value = total_of_digit(str) / 4;
	return (max_value);
}

int		ft_param_is_valid(char *str, int max_value)
{
	int		i;
	i = 0;
	while (str[i])
	{
		if (!(i % 2 == 0 && is_digit(str[i]) && str[i] < max_value + 48))
		{
			//if (is_space(str[i + 1]))
				return (1);
		}
		else //if (is_digit(str[i + 1]))
			return (1);
	}
	i = (i + 1) / 2
		if (!(i == 12 || i == 16 || i == 20 || i == 24 || i == 28 || i == 32 ||
				i == 36)
			return (1);
	return (0);
}
