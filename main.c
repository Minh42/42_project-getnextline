/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:57:03 by mpham             #+#    #+#             */
/*   Updated: 2017/12/17 22:50:54 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int     main(int argc, char** argv)
{
    int     fd;
    char    *line;
    int     i;

    i = 0;
    if (argc != 2)
        ft_putstr("too many or too few arguments\n");
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        ft_putstr("open() failed\n");
    }
	while (get_next_line(fd, &line) > 0)
	{
		ft_putstr(line);
        ft_putchar('\n');
	}
    free(line);
    if (close(fd) == -1)
    {
        ft_putstr("close() failed\n");
    }
    return (0);
}
