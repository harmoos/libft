/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: harmonie <harmonie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:26:04 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 14:52:10 by harmonie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

/*int	main(void)
{
	char    n = '*';

	printf("original : %d\n", isdigit(n));
	printf("ma version : %d\n", ft_isdigit(n));
}*/