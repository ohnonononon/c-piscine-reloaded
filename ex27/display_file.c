/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimatura <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 19:42:29 by nimatura          #+#    #+#             */
/*   Updated: 2024/06/12 20:37:13 by nimatura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_putchar_fd(int fd, int c)
{
	return (write(fd, &c, 1));
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
	while (i < read_bytes && buffer[i] != '\0')
		ft_putchar_fd(1, buffer[i++]);
	return (0);
}

// null terminate the buffer. Otherwise we eat shit
// 351bfbcb0101f56186b8f550dbc3f93613c9ba23: no need actually? to check at
// campus

int	read_and_print(int fd)
{
	char	buffer[1025];
	size_t	read_bytes;

	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buffer, 1024);
		if (read_bytes == -1)
			return (err_exit(fd, "Cannot read file."));
		buffer[read_bytes] = '\0';
		print_to_output(buffer, read_bytes);
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		fd;

	fd = 0;
	if (ac == 1)
		return (err_exit(2, "File name missing.\n"));
	if (ac > 2)
		return (err_exit(2, "Too many arguments.\n"));
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (err_exit(2, "Cannot read file.\n"));
	if (read_and_print(fd) == -1)
		return (0);
	close(fd);
	return (0);
}
