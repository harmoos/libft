/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:21:28 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/20 14:51:46 by nleoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c > 64 && c < 91)
		return (1);
	if (c > 96 && c < 123)
		return (1);
	return (0);
}

/*int	main(void)
{
	char    n = ' ';

	printf("original : %d\n", isalpha(n));
	printf("ma version : %d\n", ft_isalpha(n));
}*/