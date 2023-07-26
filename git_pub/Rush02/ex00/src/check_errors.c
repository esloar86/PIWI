/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 20:04:08 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/23 21:02:17 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_lib.h"

int check_errors(int argc, char **argv)
{
    if ((argc == 2) && (ft_atoi(&argv[1][0]) != -1))
        return (ft_atoi(&argv[1][0]));
    else if ((argc == 3) && (ft_atoi(&argv[2][0]) != -1))
        return (ft_atoi(&argv[2][0]));
    else
    {
        write (1, "error", 5);
        return (0);
    }
}
