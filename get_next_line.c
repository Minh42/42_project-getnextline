/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:38:11 by mpham             #+#    #+#             */
/*   Updated: 2017/12/08 18:25:52 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int     get_next_line(const int fd, char **line)
{
    int         ret;
    char        buf[BUF_SIZE + 1];
    static char *str                //pour garder l'information de la taille du buffer 
    
    
    while ()

    ft_strchr(str[fd], '\n') 

    while (ret = read(fd, buf, BUF_SIZE))
    {
        buf[ret] = '\0';
        ft_putnbr(ret);
        ft_putstr(buf);
    }


    ft_strsub
    ft_strjoin
    ft_memmove
    str[fd] = ft_strnew()
    


    return (1);
}