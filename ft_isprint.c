/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:37:10 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 14:52:19 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_isprint(int c)
{
	if (c > 31 && c <= 126)
		return (1);
	return (0);
}

/*int	main(void)
{
	char    n = '5';

	printf("original : %d\n", isprint(n));
	printf("ma version : %d\n", ft_isprint(n));
}*/