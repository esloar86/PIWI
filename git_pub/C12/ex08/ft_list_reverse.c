/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 17:40:16 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 23:17:21 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*element_start;
	t_list	*element_end;

	while (element_start)
	{
		while (element_end)
		{
			element_end = ft_get_prev(element_end);
		}
		element_start = element_start->next;
	}
}
