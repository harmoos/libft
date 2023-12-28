/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:58:36 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 03:07:36 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			((char *)s)[i] = '\0';
			i++;
		}
	}
}

/*int	main(void)
{
	char str[12] = "Hello World";
	int		n = 13;

	printf("Original : %ld\n", sizeof(str));

	printf("Apres : %s\n", str);

	//ft_bzero(str, 12);

	printf("Original2 : %s\n", str);

	ft_bzero(str, n);

	printf("apres void : %s\n", str);
}*/