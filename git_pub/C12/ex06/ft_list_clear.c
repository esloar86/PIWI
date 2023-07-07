/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:31:56 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 17:22:53 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*element;
	t_list	*last_element;

	element = begin_list;
	while (element)
	{
		free_fct(element->data);
		last_element = element;
		element = element->next;
		free(last_element);
	}
}
