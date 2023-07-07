/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:20:27 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 16:31:32 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*element;
	t_list	*last_element;
	int		i;

	i = 0;
	last_element = 0;
	while (i < size)
	{
		if (!(element = (t_list *)malloc(sizeof(t_list))))
			return (0);
		element->next = last_element;
		element->data = (void *)strs[i];
		last_element = element;
		i++;
	}
	return (element);
}
