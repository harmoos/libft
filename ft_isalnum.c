/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:52:25 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 14:51:36 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c > 47 && c < 58)
		return (1);
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

/*int	main(void)
{
	char    n = '*';

	printf("original : %d\n", isalnum(n));
	printf("ma version : %d\n", ft_isalnum(n));
}*/