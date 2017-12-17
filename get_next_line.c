/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minh <minh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:38:11 by mpham             #+#    #+#             */
/*   Updated: 2017/12/17 22:52:03 by minh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_from_start_to_n(char *str)
{
	int		i;

	i = 0;
	while (str != '\0' && str[i] != '\n')
        i++;
	str = ft_strsub(str, 0, i);
	return (str);
}

static char *ft_from_n_to_finish(char *str)
{
    int		i;
    
    i = 0;
    while (str != '\0' && str[i] != '\n')
        i++;
    str = ft_strsub(str, i + 1, ft_strlen(str));
    return (str);
}

/*
static void		*ft_realloc(void *str)
{
	char	*tmp;
    
    if (!(tmp = ft_strnew(ft_strlen(str))))
        return (0);
    ft_strcpy(tmp, str);
    str = NULL;
    if (!(str = ft_strnew(ft_strlen(tmp) + BUFF_SIZE)))
        return (0);
    ft_strcpy(str, tmp);
    return (str);
}
*/

int     get_next_line(const int fd, char **line)
{
    int         ret;
    char        buf[BUFF_SIZE + 1];
    static char *str;          //pour garder l'information de la taille du buffer

    if (fd < 0 || !line)
        return (-1);
    if (str == NULL)
        str = ft_strnew(BUFF_SIZE);
    while ((ret = read(fd, buf, BUFF_SIZE)) && (!ft_strchr(str, '\n')))
    {
        buf[ret] = '\0';
        str = ft_strjoin(str, buf);
        //if (ret == BUFF_SIZE)
            //ft_realloc(str);
    } 
    if (ft_strchr(str, '\n'))
    {
        *line = ft_strdup(ft_from_start_to_n(str)));
        str = ft_from_n_to_finish(str);
    }
    else
    {
        *line = ft_strdup(str);
        ft_strdel(&str);
    }
    if (str == NULL)
        return (0);
    return (1);
}
