/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:24:22 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:45:30 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*dest;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
	{
		ptr = malloc(1);
		if (ptr == NULL)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	dest = malloc(len + 1);
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	while (len != 0)
	{
		*(dest + (len - 1)) = *(s + (len - 1) + start);
		len--;
	}
	return (dest);
}
