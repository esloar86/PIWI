/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_lib.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:28:07 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/23 21:23:42 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef rush02_lib_h
# define rush02_lib_h
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

int main (int argc, char **argv);
char    *ft_putnbr(unsigned int nb);
int	ft_atoi(char *str);
char    *ft_read(char *path, char *namef);
char    *ft_strcat(char *dest, char *src);
int	check_errors(int argc, char **argv);
int	ft_atoi(char *str);
void	ft_putstr(char *str);
char	*ft_search(char *file, char *find);

#endif
