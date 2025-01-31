/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/25 11:00:26 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/27 17:07:17 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <libgen.h>

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_display_file(int fd)
{
	char	buffer;

	while (read(fd, &buffer, 1))
		write(1, &buffer, 1);
}

void	ft_errors(char *program_name, char *file_name, int is_dir)
{
	ft_putstr(basename(program_name));
	ft_putstr(": ");
	ft_putstr(file_name);
	ft_putstr(": ");
	if (is_dir)
		ft_putstr("Is a directory");
	else
		ft_putstr(strerror(errno));
	ft_putstr("\n");
}

void	ft_read_stdin(void)
{
	char	buffer;

	while (read(0, &buffer, 1))
		write(1, &buffer, 1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		i;

	i = 1;
	if (argc == 1)
		ft_read_stdin();
	while (i < argc)
	{
		errno = 0;
		if (argv[i][0] == '-' && argv[i][1] == '\0')
			ft_read_stdin();
		else if ((fd = open(argv[i], O_DIRECTORY)) == -1)
		{
			if ((fd = open(argv[i], O_RDONLY)) == -1)
				ft_errors(argv[0], argv[i], 0);
			else
				ft_display_file(fd);
		}
		else
			ft_errors(argv[0], argv[i], 1);
		i++;
	}
	return (0);
}
