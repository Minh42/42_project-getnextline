/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:57:03 by mpham             #+#    #+#             */
/*   Updated: 2017/12/08 14:02:29 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     main(int argc, char** argv)
{
    if
    

    //
    if (argc != 2)
    {
        ft_putstr("usage: fillit input_file\n");
        return (1);
    }
    else
    {
        ft_putnbr(ft_checks_tetriminos(argv[1]));
    }
    return (0);
}


}