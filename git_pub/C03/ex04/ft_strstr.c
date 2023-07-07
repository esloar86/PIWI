/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:26:41 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/12 14:38:23 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
