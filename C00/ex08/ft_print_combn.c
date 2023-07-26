/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 08:24:32 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/12 08:24:54 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putout(int nb, int *tab, int pos)
{
	int i;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	i = 0;
	while (i < nb)
	{
		ft_putchar(tab[i] + '0'); // imprimirá el dígito de la posición 'i' de tab, más '0', lo que lo convierte en char
		i++; // se va sumando hasta que se alcance el nº de cifras que debe tener el número a combinar
	}
}

void	ft_print_combn_increment(int nb, int *tab)
{
	int i;
	int max;

	i = nb - 1;
	max = 9;
	while (tab[i] == max)
	{
		i -= 1;
		max -= 1;
	}
	tab[i] += 1;
	while (i < nb)
	{
		tab[i + 1] = tab[i] + 1;
		i += 1;
	}
}

void	ft_print_combn(int nb)
{
	int tab[10]; // declaro int cadena
	int i; //declaro int contador

	i = 0;
	while (i < nb) // para saber qué longitud tiene que tener las cifras a combinar
	{
		tab[i] = i; // inicializo tab con 0, 0+1, 1+1, 2+1, 3+1.... (porque no debe repetirse numeros en la combinación)
		i++;
	}
	ft_putout(nb, tab, 0);  // llamada a putout mandando el tamaño del número a combinar, el array iniciado a 0, 01, 012, 0123, etc..., y cero (la posición)
	                        // imprimirá el dígito de la posición 'i' de tab, más '0', lo que lo convierte en char
	                        // se va sumando hasta que se alcance el nº de cifras que debe tener el número a combinar
	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
		{
			tab[nb - 1] += 1;
		}
		else
		{
			ft_print_combn_increment(nb, tab);
		}
		ft_putout(nb, tab, 1);
	}
}

int main() {
  ft_print_combn(3);
  return 0;
}
