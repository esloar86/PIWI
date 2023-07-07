/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/09 22:51:19 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/13 10:49:20 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		skip_whitespaces_minus(char *str, int *ptr_i)
{
	int		minus_count;
	int		i;

	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' ' ||
			str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	minus_count = 0;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			minus_count++;
		i++;
	}
	*ptr_i = i;
	return (minus_count);
}

int		ft_atoi(char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	if (skip_whitespaces_minus(str, &i) % 2)
		sign = -1;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return (result);
}
