
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:09:50 by nleoni            #+#    #+#             */
/*   Updated: 2023/12/27 17:09:55 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
// #include "libft.h"

size_t	ft_count(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s != '\0')
	{
		if (*s == c)
        {
            count++;
        }
		s++;
	}
	return (count);
}

char *ft_strlcpy2(char *dest, const char *src, char c, size_t size)
{
    size_t i;
    
    if (src == NULL)
        return (0);
    i = 0;
    if (size > 0)
    {
        while (i < size && src[i] != c)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (dest);
}

static char *ft_malloc(char *s, char c, int *p)
{
    int     i;
    int     j;
    char    *g;

    i = 0;
    j = *p;
    g = NULL;
    while (s[i] != '\0')
    {
        while (s[i] != c)
        {
            i++;
            j++;
        }
        if (s[i] == c && i != 0)
        {
            g = (char *)malloc((i + 1) * sizeof(char));
            if (!g)
                return 0;
            break;
        }
        i = 0;
        j++;
    }
    return (ft_strlcpy2(g, s, c, j));
}

char	**ft_split(char const *s, char c)
{
	size_t	a;
	size_t	i;
    int     pos;
	char	**r;

	if (s == NULL)
		return (NULL);
	a = ft_count(s, c);
	r = (char **)malloc((a + 1) * sizeof(char *));
	if (r == NULL)
		return (NULL);
	i = 0;
    pos = 0;
	while (i < a)
	{
        r[0] = ft_malloc(((char *)s), c, &pos);
      while (*s != '\0')
      {
        //r[0] = ft_malloc(((char *)s), c, &pos);
        if (*s == c)
        {
          pos++;
          i++;
          s++;
          if (*s != c)
            r[i] = ft_malloc(((char *)s), c, &pos);
        }
        s++;
      }
	}
	r[i] = NULL;
	return (r);
}

// int main() {
// 	char **words = ft_split("Hello World This is a Test", 'T');

// 	size_t i = 0;
// 	if (words != NULL) {
//         while(words[i])
//         {
//             printf("Words: %s\n", words[i]);
//             i++;
//         }
//         i = 0;
// 		while (words[i])
//         {
//             free(words[i]);
//             i++;
//         }
// 	}
// 	return (0);
// }