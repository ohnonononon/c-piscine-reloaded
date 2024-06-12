/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:42:29 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/12 09:56:26 by ohnudes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_putchar_fd(int fd, int c)
{
	return(write(fd, &c, 1));
}

int	err_exit(int fd, char *msg)
{
	while (*msg)
		ft_putchar_fd(fd, *(msg++));
	return (0);
}

int	print_to_output(char *buffer, int read_bytes)
{
	int	i;

	i = 0;
	while (i < read_bytes)
		ft_putchar_fd(1, buffer[i++]);
	return (0);
}

// null terminate the buffer. Otherwise we eat shit
int	read_and_print(int fd)
{
	char	buffer[1024];
	size_t	read_bytes;

	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, 1024);
		if (read_bytes == -1)
			return (err_exit(fd, "Cannot read file."));
		print_to_output(buffer, read_bytes);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char	*path;
	int		fd;

	path = NULL;
	fd = 0;
	if (ac == 1)
		return (err_exit(2, "File name missing."));
	if (ac > 2)
		return (err_exit(2, "Too many arguments."));
	path = av[1];
	fd = open(path, O_RDONLY);
	if (fd == -1)
		return (err_exit(2, "Wrong path: not a valid path."));
	if (read_and_print(fd) == -1)
		return (0);
	close(fd);
	return (0);
}
