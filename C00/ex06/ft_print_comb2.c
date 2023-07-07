/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 16:28:53 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/06 16:28:55 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb(void)
{
	char i = '0';
	char j = '0';
    char k = '0';
    char l = '0';
    while (i<='9')
    {
        j='0';
        while (j<='9')
        {
            k='0';
            while (k<='9')
            {
                while (l<='9')
                {
                    write(1, &i, 1);
                    write(1, &j, 1);
                    write(1, " ", 1);
                    write(1, &k, 1);
                    write(1, &l, 1);
                    if (! (i=='9' && j=='8' && k=='9' && l=='9'))
                        write(1, ",", 1);
                    else
                        printf("fin");
                    l++;
                }
                if (!(k=='9' && l=='9'))
                {
                    l='0';
                    k++;
                }
            }
            j++;
            if (k=='9' && l=='9')
            {
                k='0';
                l=j++;
                printf("entra en 99 ");
            }
                
        }
        i++;
        if (j=='9' && k=='9')
            k=i++;
    }
 }

int	main (void)
{
	ft_print_comb ();
	return (0);
}
