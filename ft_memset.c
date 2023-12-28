/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:53:42 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 14:51:03 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int	i;
	//char	*a;

	//a = *(char *)s;
	i = 0;
	while (n > 0)
	{
		((char *)s)[i] = (char)c;
		i++;
		n--;
	}
	return (s);
}

/*int	main()
{
	char s[] = "Ouiaaa je suis la";

	printf("mine: %p\n", ft_memset(s + 2, '8', 4));
	printf("oui: %s\n", s);
	printf("memset: %p\n", memset(s, '8', 4));
}*/