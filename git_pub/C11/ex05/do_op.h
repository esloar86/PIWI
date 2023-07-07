/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 15:28:11 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/24 16:20:34 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
int		ft_addition(int nb1, int nb2);
int		ft_substraction(int nb1, int nb2);
int		ft_multiplication(int nb1, int nb2);
int		ft_division(int nb1, int nb2);
int		ft_modulo(int nb1, int nb2);

#endif
