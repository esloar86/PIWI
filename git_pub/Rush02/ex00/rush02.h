/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 17:34:46 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/23 15:47:17 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <sys/types.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_parse_dict(char *str);
void	print_number(char *str);
void	putstr(char *str);
void	print_separator(int j);
char	*create_number(int j);
char	*get_nb_from_pipe(void);
void	ft_go_to_next_line(int *fd, int *i);
void	ft_error(void);
void	comp_str_dict(int len);
void	ft_remove_start_zeros(char **str);
int		ft_realloc(char **str, char sign);
void	ft_print_separator_with_space(int j);

#endif
