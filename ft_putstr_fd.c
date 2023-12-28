/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:43:46 by harmonie          #+#    #+#             */
/*   Updated: 2023/11/22 00:32:29 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    fr_putstr_fd(char *s, int fd)
{
    int     i;

    i = 0;
    if (s == NULL)
        return;
    while(s[i] != '\0')
    {
        write(fd, &s[i], 1);
        i++;
    }
}