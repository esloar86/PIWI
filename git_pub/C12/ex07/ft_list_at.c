/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:32:06 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 17:39:42 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*element;

	element = begin_list;
	while (element && i != nbr)
	{
		element = element->next;
		i++;
	}
	if (i != nbr)
		return (0);
	else
		return (element);
}
