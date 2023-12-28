
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:54:35 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/08 17:48:05 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}

// int     main()
// {
// 	printf("\n%d\n", 't' + 256);
//     char s[] = "tripouille";
//     printf("Mine: %s\n", ft_strchr(s, 't' + 256));
//     printf("strchr: %s\n", strchr(s, 't' + 256));
// }