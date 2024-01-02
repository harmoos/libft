/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:28:53 by nleoni            #+#    #+#             */
/*   Updated: 2023/12/28 15:47:15 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		a;
	char	*ptr;
	char	*s1;

	a = 0;
	s1 = (char *)s;
	while (s[a])
		a++;
	if (!s)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (a + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (*(s1 + i) != '\0')
	{
		*(ptr + i) = f(i, *(s1 + i));
		i++;
	}
	*(ptr + i) = '\0';
	return (ptr);
}

/*int     main()
{
	printf("%s\n", ft_strmapi())
}*/