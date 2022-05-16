/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:23:09 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 14:38:25 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* Fills the first n bytes of the memory area pointed 
   to by s with the constant byte c. */

void	*ft_memset(void *s, int c, size_t n)
{
	char	*p;

	p = (char *)s;
	if (n <= 0)
		return (s);
	while (n > 0)
	{
		p[n - 1] = c;
		n--;
	}
	return (s);
}
