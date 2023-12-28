/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:26:46 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/21 13:36:19 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

int	ft_atoi(const char *nptr)
{
	int	i;
	int	tmp;
	int	signe;

	tmp = 0;
	i = 0;
	signe = 1;
	while (nptr[i] == ' ' || (nptr[i] >= '\t' && nptr[i] <= '\r'))
        i++;
	while ((nptr[i] == '+') || (nptr[i] == '-'))
	{
		if (nptr[i] == '-')
		{
			signe = -1;
			if ((nptr[i + 1] == '-') || (nptr[i + 1] == '+'))
				return (0);
		}
        if (nptr[i] == '+')
		{
			signe = 1;
			if ((nptr[i + 1] == '-') || (nptr[i + 1] == '+'))
				return (0);
        }
        i++;
	}
	while (nptr[i] != '\0' && (nptr[i] >= '0' && nptr[i] <= '9'))
	{
		 if ((tmp > INT_MAX / 10) || (tmp == INT_MAX / 10 && nptr[i] - '0' > INT_MAX % 10))
            return (signe == 1) ? INT_MAX : INT_MIN;
			
		tmp = tmp + (nptr[i] - '0');
		tmp *= 10;
		i++;
	}
	tmp /= 10;
	tmp *= signe;
	return (tmp);
}

// int	main()
// {
// 	char escape[] = {9, 10, 11, 12, 13, 0};
// 	string e(escape);
	
// 	printf("Original : %d\n", atoi(e + "1"));
// 	printf("Copie : %d\n", ft_atoi(e + "1"));
//     return (0);
// }