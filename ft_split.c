/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:09:50 by nleoni            #+#    #+#             */
/*   Updated: 2023/12/28 19:10:38 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c && s[i + 1] == c) || (s[i] != c && s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

size_t	ft_wordslen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}

void	*ft_free(char **r)
{
	size_t	i;

	i = 0;
	while (r[i])
	{
		free(r[i]);
		i++;
	}
	free(r);
	return (NULL);
}

char	**ft_smalloc(const char *s, char c)
{
	size_t	a;
	char	**r;

	a = 0;
	a = ft_count(s, c) + 1;
	r = (char **)malloc(a * sizeof(char *));
	if (r == NULL)
		return (ft_free(r));
	return (r);
}

char	**ft_split(const char *s, char c)
{
	size_t	i;
	size_t	pos;
	char	**r;

	if (s == NULL)
		return (NULL);
	r = ft_smalloc(s, c);
	i = 0;
	pos = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			r[pos] = (char *)malloc(sizeof(char) * (ft_wordslen(s + i, c) + 1));
			if (!r)
				return (ft_free(r));
			ft_strlcpy(r[pos], (char *)s + i, ft_wordslen(s + i, c) + 1);
			i += ft_wordslen(s + i, c);
			pos++;
		}
		else
			i++;
	}
	r[pos] = NULL;
	return (r);
}

// int	main(void)
// {
// 	char **words = ft_split("Hello World This is a Test", 'T');

// 	size_t i = 0;
// 	if (words != NULL)
// 	{
// 		while (words[i])
// 		{
// 			printf("Words: %s\n", words[i]);
// 			i++;
// 		}
// 		i = 0;
// 		while (words[i])
// 		{
// 			free(words[i]);
// 			i++;
// 		}
// 	}
// 	return (0);
// }