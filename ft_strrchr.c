
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 17:36:46 by nleoni            #+#    #+#             */
/*   Updated: 2023/11/10 18:27:40 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while(s[i])
		i++;
	while (i > 0 && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return (char *)&s[i];
	return (NULL);
}

// int	main(void)
// {
// 	char s[] = "tripouille";
// 	// char s2[] = "ltripouiel";
// 	// char s3[] = "";
// 	printf("Mine: %s\n", ft_strrchr(s, 'z'));
// 	printf("strchr: %s\n", strrchr(s, 'z'));
// }