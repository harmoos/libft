/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:52:57 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/23 21:12:12 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
// #include <stdio.h>

int     ft_strlen(char *str)
{
    int     i;

    i = 0;
    while(str[i])
        i++;
    return (i);
}

char     *ft_strdup(char *s)
{
    int     size;
    char    *ptr;
    int     i;

    size = ft_strlen(s);
    ptr = malloc((size + 1) * sizeof(char));
    if (!ptr)
        return NULL;
    i = 0;
    while (s[i])
    {
        ptr[i] = s[i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}

// int     main()
// {
//     char    *s = "2518651";

//     printf("Original : %s\n", strdup(s));

//     printf("Mine : %s\n", ft_strdup(s));
    
// }