/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   a.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 20:40:47 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:42:48 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Size-bounded string copying and concatenation. Size wird 
zur insgesamten Länge von *dest und wenn dann noch Platz 
ist, wird ein Teil von "src hinter *dest hinzukopiert und "+ /0" */

unsigned int	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dest;

	len_dest = 0;
	while (dest[len_dest] != '\0' && len_dest < size)
		len_dest++;
	i = len_dest;
	while (src[len_dest - i] && len_dest + 1 < size)
	{
		dest[len_dest] = src[len_dest - i];
		len_dest++;
	}
	if (i < size)
		dest[len_dest] = '\0';
	return (i + ft_strlen((char *)src));
}
