/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 13:50:04 by nleoni            #+#    #+#             */
/*   Updated: 2024/01/02 18:41:01 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		return (h);
	while (h[i] && i < len)
	{
		if (h[i] == n[0])
		{
			while (n[j] && h[i + j] == n[j] && i + j < len)
			{
				if (n[j + 1] == '\0')
					return (&h[i]);
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