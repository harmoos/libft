/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:56:46 by harmonie          #+#    #+#             */
/*   Updated: 2023/11/25 15:58:24 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
// #include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    size_t src_len;
    size_t dest_len;
    
    if (src == NULL)
        return (0);
    src_len = 0;
    while (src[src_len] != '\0') {
        src_len++;
    }
    dest_len = 0;
    while (dest[dest_len])
        dest_len++;
    i = 0;
    if (size > 0)
    {
        while (i < (size - 1) && i < src_len)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (src_len);
}

// int     main(void)
// {
//     size_t      i;
//     char src[] = "coucou";
// 	char dest[10]; 
    
//     i = 0;
//     memset(dest, 'A', 10);
//     printf("dest[0]: %d\n", dest[0]);
//     printf("function: %ld\n", ft_strlcpy(dest, src, 0));
//     while(dest[i] && i < 10)
//     {
//            printf("autres: %d\n", dest[i]);
//            i++;
//     }
// }