/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 02:51:31 by nleoni          #+#    #+#             */
/*   Updated: 2023/11/28 00:00:17 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putnbr_fd(int n, int fd)
{
    int     count;
    int     temp;
    int     div;
    char    dig;
    
    if (n < 0)
    {
        write(fd, "-", 1);
        n = -n;
    }
    if (n == 0)
    {
        write(fd, "0", 1);
        return;
    }
    count = 0;
    temp = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    div = 1;
    while (--count > 0)
        div *= 10;
    while (n > 0)
    {
        dig = '0' + n / div;
        write(fd, &dig, 1);
        n %= div;
        div /= 10;
    }
}