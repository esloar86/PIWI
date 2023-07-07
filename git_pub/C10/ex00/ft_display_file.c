/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frdescam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 12:16:00 by frdescam          #+#    #+#             */
/*   Updated: 2019/06/22 14:12:15 by frdescam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int fd)
{
	char	*buffer;

	while (read(fd, &buffer, 1))
	{
		write(1, &buffer, 1);
	}
}

int		main(int argc, char **argv)
{
	int		fd;

	if (argc < 2)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if ((fd = open(argv[1], O_RDONLY)) == -1)
			write(2, "Cannot read file.\n", 18);
		else
			ft_display_file(fd);
	}
	return (0);
}
