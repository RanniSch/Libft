/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:23:37 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:41:19 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	int		i;

	i = 0;
	while (*(s + i) != 0)
		i++;
	dest = malloc(1 * (i + 1));
	i = 0;
	if (dest == NULL)
	{
		return (NULL);
	}
	else
	{
		while (*(s + i) != 0)
		{
			*(dest + i) = *(s + i);
			i++;
		}
		*(dest + i) = '\0';
		return (dest);
	}
}
