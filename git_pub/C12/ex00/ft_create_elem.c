/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 09:53:11 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 23:19:48 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*list;

	if (!(list = (t_list *)malloc(sizeof(t_list))))
		return (0);
	list->data = data;
	list->next = NULL;
	return (list);
}
/*
**void	ft_putchar(char c)
**{
**	write(1, &c, 1);
**}
**
**void	ft_putstr(char *str)
**{
**	int		i;
**
**	i = 0;
**	while (str[i])
**	{
**		ft_putchar(str[i]);
**		i++;
**	}
**}
**
**void	ft_show_tab(t_list *par)
**{
**	int		i;
**
**	ft_putstr((char *)par->data);
**	ft_putchar('\n');
**}
**
**int		main(void)
**{
**	char	*data = "Hello World !";
**	t_list	*list;
**
**	list = ft_create_elem((void *)data);
**	ft_show_tab(list);
**}
*/
