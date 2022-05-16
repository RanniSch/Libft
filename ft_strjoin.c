/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:23:44 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 17:48:43 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	dest = malloc(1 * (ft_strlen(s1) + ft_strlen(s2) + 1));
	i = 0;
	j = 0;
	if (dest == NULL)
		return (NULL);
	while (*(s1 + i) != 0)
	{
		*(dest + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j) != 0)
	{
		*(dest + i + j) = *(s2 + j);
		j++;
	}
	*(dest + i + j) = '\0';
	return (dest);
}
