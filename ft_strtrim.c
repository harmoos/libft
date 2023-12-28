
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 23:17:25 by harmonie          #+#    #+#             */
/*   Updated: 2023/11/12 23:00:43 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int     char_set(const char *set, char c)
{
    int     i;

    i = 0;
    while(set[i])
    {
        if(c == set[i])
            return 1;
        i++;
    }
    return 0;
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t      a;
    size_t      d;
    size_t      b;
    size_t      trim;
    const char  *src;
    //char        *dst;
    char        *ptr;

    d = 0;
    if (s1 == NULL || set == NULL)
        return (NULL);
    a = 0;
    while(s1[a])
        a++;
    //printf("a: %ld\n", a);
    while(char_set((char *)set, s1[d]))
        d++;
    //printf("d: %ld\n", d);
    if(d == a)
    {
        ptr = (char *)malloc(1);
        if(ptr == NULL)
            return NULL;
        ptr[0] = '\0';
        return ptr;
    }
    b = a - 1;
    //printf("d: %ld\n", d);
    //printf("a: %ld\n", a);
    //printf("b: %ld\n", b);
    while(char_set((char *)set, s1[b]))
        b--;
    trim = b - d + 1;
    //printf("trim: %ld\n", trim);
    ptr = (char *)malloc(trim + 1);
    //printf("ptr: %s\n", ptr);
    if (ptr == NULL)
        return NULL;
    char *dst = ptr;
    src = s1 + d;
    while(trim--)
        *dst++ = *src++;
    *dst = '\0';
    return ptr;
    //return (char *)s1;   
}

/*int     main()
{
    printf("%s\n", ft_strtrim("0  1234567892102", "012"));
}*/