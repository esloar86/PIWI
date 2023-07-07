/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:58:00 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 23:18:16 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_lst)
{
	int		len;
	t_list	*element;

	len = 0;
	element = begin_lst;
	while (element)
		len++;
	return (len);
}
