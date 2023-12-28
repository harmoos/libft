/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:06:36 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/23 21:17:40 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	size_t			i;
	unsigned int	a;
	char			*empty_str;

	if (s == NULL)
		return (NULL);
	i = 0;
	a = ft_strlen((char *)s);
	if (start > a)
	{
		empty_str = (char *)malloc(1);
		if (empty_str == NULL)
			return (NULL);
		empty_str[0] = '\0';
		return (empty_str);
	}
	if (len > a - start)
		len = a - start;
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL || ((a - start) < len))
		return (NULL);
	while (s[start] && i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

// int	main(void)
// {
// 	printf("ft_substr: %s\n", ft_substr("0123456789", 4, 5));
// }