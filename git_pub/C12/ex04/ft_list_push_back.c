/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 16:00:41 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 17:26:48 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*element;
	t_list	*list;

	element = *begin_list;
	while (element)
		element = element->next;
	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (0);
	element->next = list;
	list->next = 0;
	list->data = data;
}
