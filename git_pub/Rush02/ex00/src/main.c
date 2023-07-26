/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eslopez- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:26 by eslopez-          #+#    #+#             */
/*   Updated: 2023/07/23 22:22:54 by eslopez-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02_lib.h"

char    *data_path = "../dict/";

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (dest[i])
        i++;
    while (src[j])
        j++;
    char *ret = (char*)malloc((i + j + 1) * sizeof(char));
    i = 0;
    j = 0;
    while (dest[i])
    {
        ret[i] = dest[i];
        i++;
    }
    while (src[j])
    {
        ret[i] = src[j];
        i++;
        j++;
    }
    ret[i] = '\0';
    free (ret);
    return (ret);
}
char    *ft_read(char *path, char *namef)
{
    int fd;
    int rf;

    path = ft_strcat(path,namef);
    fd = open (path, O_RDONLY);
    char *file = malloc(1024 * sizeof(char));
	if (file == 0)
	{
		file = "Dict Error\n";
		return (file);
	}
    rf = read (fd, file, 1024);
    close(fd);
    return (file);
}
char    *ft_putnbr(unsigned int nb)
{
    char    *find = malloc(1024 * sizeof(char));
    if (find == 0)
        return(0);
    int     aux;
    int     i;

    i = 0;
    while (nb > 0)
    {
        aux = nb % 10;
        aux += '0';
        find[i] = aux;
        i++;
        nb /= 10;
    }
    return (find);
}
int main (int argc, char **argv)
{
	int	num;
	int	i;
	char *name;
	char *file;

	i = 0;
	num = check_errors(argc,argv);
	name = "numbers.dict";
	if (argc == 2 && num != 0 && num != -1)
	{
		file = ft_read(data_path,name);
		ft_search(file,ft_putnbr(num));
	}
	if (argc == 3 && num != 0 && num != -1) 
	{
		name = argv[1];
		file = ft_read(data_path,argv[1]);
		ft_search(file,ft_putnbr(num));
	}
	//ft_putstr(ft_putnbr((ft_atoi(argv[1])));
	//printf ("%s\n", file);
	free(file);
	return (0);
}
