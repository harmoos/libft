/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nleoni <nleoni@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:23:47 by nleoni            #+#    #+#             */
/*   Updated: 2023/12/28 15:41:23 by nleoni           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest1;
	char	*src1;
	size_t	i;

	dest1 = (char *)dest;
	src1 = (char *)src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest1);
}

// int	main(void)
// {
// 	void *dest;
// 	const void *src;
// 	char dest1[20];
// 	char src1[] = "][][][][]";
// 	size_t n = 10;
// 	*dest1 = (char *)dest;
// 	*src1 = (char *)src;

// 	printf("Orig: %p\n", memcpy(dest1, src1, n));
// 	printf("dest: %s\n", dest1);
//     printf("Mine: %p\n", ft_memcpy(dest1, src1, n));
//     printf("Mine dest: %s\n", dest1);
// }