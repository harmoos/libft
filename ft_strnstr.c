/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:07:12 by harmonie          #+#    #+#             */
/*   Updated: 2023/11/27 23:24:53 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	j = 0;
	h = (char *)big;
	n = (char *)little;
	if (!*n)
		return(n);
	while (h[i] && i < len)
	{
		if (h[i] == n[0])
		{
			while (n[j] && h[i + j] == n[j] && i + j < len)
			{
				if (n[j + 1] == '\0')
					return(&h[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char * empty = (char *)"";
// 	printf("\n%s\n", empty);
// 	printf("mine: %s\n", ft_strnstr(empty, "coucou", -1));
// }