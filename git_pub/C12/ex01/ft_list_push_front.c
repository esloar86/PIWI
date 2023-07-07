/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:12:23 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 23:18:42 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (0);
	list->next = *begin_list;
	list->data = data;
	*begin_list = list;
}
