/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:45:56 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 14:54:59 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int     i;

    if (s == NULL || f == NULL)
        return;
    i = 0;
    while(s[i])
    {
        f(i, &s[i]);
        i++;
    }
}