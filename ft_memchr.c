/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:22:51 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:36:35 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*src;

	src = (char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char)c)
		{
			return (src + i);
		}
		i++;
	}
	return (NULL);
}
