/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:57:03 by mpham             #+#    #+#             */
/*   Updated: 2017/12/18 09:57:16 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int argc, char** argv)
{
    int     fd;
    char    *line;

    if (argc != 2)
        ft_putstr("too many or too few arguments\n");
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        ft_putstr("open() failed\n");
    }
    while (get_next_line(fd, &line) == 1)
	{
		ft_putendl(line);
		free(line);
	}

    /*
	while (get_next_line(fd, &line) > 0)
	{
        ft_putstr("line :");
		ft_putstr(line);
        ft_putchar('\n');
	}
    free(line);
    */
    if (close(fd) == -1)
    {
        ft_putstr("close() failed\n");
    }
    return (0);
}
