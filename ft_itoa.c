/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rschlott <rschlott@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 12:22:44 by rschlott          #+#    #+#             */
/*   Updated: 2022/05/16 16:09:43 by rschlott         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lengthcal(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

int	ft_positive(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*dest;
	int		len;

	len = ft_lengthcal(n);
	dest = malloc(1 * (len + 1));
	if (!dest)
		return (NULL);
	dest[len] = '\0';
	if (n < 0)
		dest[0] = '-';
	if (n == 0)
		dest[0] = '0';
	while (n != 0)
	{
		len--;
		dest[len] = ft_positive(n % 10) + '0';
		n = n / 10;
	}
	return (dest);
}
